#include<stdio.h>
#include<math.h>
float A[20];
int n;
 
void nhap_ham_so()
{
    printf("\nNhap bac cua ham so (n):");
    scanf("%d", &n);
    printf("Nhap cac he so: \n");
    for (int i = 0; i <= n; i++) {
        printf("A[%d] = ", i);
        scanf("%f", &A[i]);
    }
    return;
}
 
float tinh_ham(float c)
{
    float p = A[0];
    for (int i = 1; i <= n; i++) {
        p = p * c + A[i];
    }
    return p;
}
 
 
int main()
{
    float a, b, c,delta;
    nhap_ham_so();
    do {
        printf("\nNhap khoang nghiem a, b: ");
        scanf("%f%f", &a, &b);
        if (tinh_ham(a) * tinh_ham(b) > 0) {
            printf("Kh nghiem sai, nhap lai!");
        }
        else break;
    }
    while (1);
    printf("Nhap sai so : ");scanf("%f",&delta);
    printf("\n");

    printf("a \t \t b \t\t (a+b)/2 \t  f(c)  \t (b-a)/2\n");
    do {
        c = (a + b) / 2;
        printf("%.5f \t %.5f \t %.5f \t %.5f \t %.5f \n", a, b, c,tinh_ham(c),(b-a)/2);
        if (tinh_ham(c) * tinh_ham(a) < 0) b = c;
        else a = c;
        
    }
    while (fabs(a - b) > delta && tinh_ham(c) != 0);
    printf("\nNghiem cua pt: x = %f", c);
    return 0;
}
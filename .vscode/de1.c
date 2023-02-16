#include<stdio.h>
#include<math.h>
float F(float n, float x)
{
    float gt=0;
    if(x!=0 && n>1)
    {
        for (int i=1;i<=n;i++){
        gt+=i/pow(x,i) ;}
        gt+=x;
}
else {
    gt=sin(x)*sin(x)+exp(n);}
    return gt;}
int main()
{
    float x, n, gt;
    printf("Nhap n:"); scanf("%f",&n);
    printf("Nhap x:"); scanf("%f",&x);
    gt=F(n,x);
    printf("F(%.1f,%.1f)=%f",n,x,gt);
}

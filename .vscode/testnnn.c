#include<stdio.h>
#include<math.h>
int main ()
{
    int n, a[100];
    printf("Nhap n: "); scanf("%d",&n);
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("A[%d]= ", i);
        scanf("%d",&a[i]);
    }
    printf("\nHien thi mang:\n");
    for(i = 1; i <= n; i ++)
    {
        printf("%d   ", a[i]);
    }
   int temp, j;
   for (i = 1; i < n; i++)
   {
    for (j = i+1; j <= n; j++)
    {
        if(a[i] < a[j])
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
   } 
   printf("\nMang moi:\n");
   for(i = 1; i <= n; i++)
   {
    printf("%d   ", a[i]);
   }
   //Xoa phan tu dau tien bang x
   int x, middle = -1;
   printf("Nhap x: "); scanf("%d", &x);
   for( i = 1; i <= n; i++)
   {
    if(a[i] == x)
    {
        middle = i;
        break;
    }
   }
   for( i = middle; i <= n; i++)
   {
    a[i+1] = a[i];
   }
   printf("Mang da xoa\n");
   for (i = 1; i <= n + 1; i++)
   {
    printf("%d   ", a[i]);
   }
}
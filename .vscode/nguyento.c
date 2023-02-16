#include<stdio.h>
#include<math.h>
int kt(int x)
{
	if(x<=1)
	return 0;
	int i;
	for(i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		return 0;
	}
	return 1;
 }
 int main()
 {
 int n,s=0,i;
 Nhapn:
 printf("Nhap n="); scanf("%d",&n);
 if(n<=1)
 goto Nhapn;
 for(i=2;i<=n;i++)
 {
 	if(kt(i))
 	{
 		s+=i;
	 }
 }printf("\nTong la:%d",s);
}

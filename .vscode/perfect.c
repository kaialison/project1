#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	do 
	{
		printf("Nhap n="); scanf("%d",&n);
	}
	while(n<1);
	int i,s=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
	{
		s+=i;}
	}
	
	if(s==n)
	{
	printf("%d hoan hao",n);
}
}

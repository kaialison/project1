#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	do
	{
		printf("nhap n="); scanf("%d",&n);
	}
	while(n<2);
	int i,j,tong=0;
	for(i=2;i<=n;i++)
	{
		int dem;
		for(j=2;j<=(i-1);j++)
		{
			if(i%j==0)
			{
			dem++;	
			}
			if(dem==0)
			{
				tong+=i;
			}
		}
	}
	printf("S=%d",tong);
}

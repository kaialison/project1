#include<stdio.h>
#include<math.h>
int main()
{
	int n, dem=0;
	printf("Nhap so:"); scanf("%d",&n);
	for(int i=2;i<n;i++){
		if(n%i==0){
			dem++;
		}
	}
	if(dem==0){
		printf("Yes");
	}
	else{
		printf("No");
	}
}
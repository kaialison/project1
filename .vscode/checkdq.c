#include<stdio.h>;
#include<math.h>;
int gt(int n){
	if(n==1)
	return 1;
	else 
	return n*gt(n-1);
}

int main(){
	int n, kq;
	printf("Nhap n: "); scanf("%d",&n);
	kq=gt(n);
	printf("%d! = %d",n,kq);
}
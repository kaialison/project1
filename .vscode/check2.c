
#include<stdio.h>;
#include<math.h>;
int main(){
	int a[100],n,i,tg;
	printf("Nhap n="); scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("a[%d]=",i); scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(a[j]<0){
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
				break;
			}
		}
	}
	printf("Hien thi mang:\t");
	for(i=1;i<=n;i++){
		printf("%d\t",a[i]);
	}
	int min=a[1],dem;
	for(i=1;i<=n;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	for(i=1;i<=n;i++){
		if(a[i]==min){
			dem=i;
			break;
		}
	}
	for(i=dem;i<=n;i++){
		a[i]=a[i+1];
	}
	printf("\nMang moi:\t");
	for(i=1;i<n;i++){
		printf("%d\t",a[i]);
	}
}
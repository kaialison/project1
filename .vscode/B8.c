#include<stdio.h>
#include<conio.h>
#include<math.h>
float nhap()
{
	float x;

		printf("Nhap so thuc:"); scanf("%f",&x);
	
	return x;
}
float tinh(float x,float y)
{
	float gt;
	gt=pow(2,(x+y))+cbrt(x-y);
	return gt;
}
void hienthi(float gt)
{
	printf("F(x,y)=%f",gt);
}
int main()
{
	float x,y,gt;
	x=nhap();
	y=nhap();
	gt=tinh(x,y);
	hienthi(gt);
	return 0;
}
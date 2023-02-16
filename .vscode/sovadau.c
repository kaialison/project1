#include<stdio.h>
#include<math.h>
#include<conio.h>
float nhapso()
{
	float x;
	printf("Moi ban nhap so:"); scanf("%f",&x);
	return x;
}
char nhapkitu()
{
	char sign;
	do{
	printf("Nhap mot ky tu:"); scanf("%c",&sign);}
	while (sign!='+' && sign!='-' && sign!='*' && sign!='/');
	return sign;
}
float tinh(float a,float b, char sign)
{
	float gt;
	if (sign=='+')
	gt=a+b;
	else if (sign=='-')
	gt=a-b;
	else if (sign=='*')
	gt=a*b;
	else
	if(b==0)
{	printf("ko chia duoc");
	gt=0;}
	else gt=a/b;
	return gt;
}
int main()
{
	float a,b,gt;
	char sign;
	sign=nhapkitu();
	a=nhapso();
	b=nhapso();
	gt=tinh(a,b,sign);
	printf("\nra: %.5f",gt);
	return 0;
}
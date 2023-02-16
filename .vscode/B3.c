#include<stdio.h>
#include<conio.h>
#include<math.h>
float inputnumber()
{
	float x;
	do
	{
		printf("Nhap so thuc:"); scanf("%f",&x);
	}
	while(x<0 || x>100);
	return x;
}
char inputchoice()
{
	char sign;
	do
	{
		printf("\n"); scanf("%c",&sign);
	}
	while(sign!='P' && sign!='D');
	return sign;
}
float outputresult(float a, char sign)
{
	float ht;
	if(sign=='P')
	ht=a;
	else if(sign=='D')
	ht=(float)a/100.0;
	return ht;
}
int main()
{
	float a,ht;
	char sign;
	a=inputnumber();
	sign=inputchoice();
	ht=outputresult(a,sign);
	printf("Ket qua:%.2f",ht);
}

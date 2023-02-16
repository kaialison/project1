#include<stdio.h>
#include<math.h>
int songay(int thang, int nam)
{
	switch(thang){
		case1:
		case3:
		case5:
		case7:
		case8:
		case10:
		case12:
			return 31;	
		case4:
		case6:
		case9:
		case11:
			return 30;
		case2:
			return(nam % 400==0) || (nam%4==0 && nam%100!=0)?29:28;
	
	}
}
int main()
{
	int thang, nam, so;
	do{
	printf("Nhap ngay, thang va nam:"); scanf("%d%d",&thang,&nam);
	}
	while(thang<1 || thang>12 || nam<1);
	so=songay(thang, nam);
	printf("so ngay cua thang la:%d", so);
}

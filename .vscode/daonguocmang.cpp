#include <iostream>
using namespace std;
int main()
{
	int n,i,a[100];
	cout <<"Nhap n= " ; cin >> n ;
	for (i = 1 ; i <= n ; i++)
	{
		cout <<"a[" << i << "] = ";
		cin >> a[i] ;
	}
	int temp, start = 1 , end = n;
	
		while (start < end)
		{ 
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start ++;
		end --;
	}
	for (i = 1 ; i <= n ; i ++)
	{
		cout << a[i] << "\t";
	}
}
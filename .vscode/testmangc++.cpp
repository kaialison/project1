#include<iostream>
using namespace std;
void inputarrange(int a[], int &n){
	cout <<"Nhap n = "; cin >> n;
	for(int i=1; i<=n; i++){
		cout <<"a[" << i << "] = "; cin >> a[i];
	}
}
void showarrange(int a[], int &n){
	cout << "\nHien thi mang:\t";
	for(int i=1; i<=n; i++){
		cout<<a[i] << "\t";
	}
}
void sapxep(int a[], int &n){
	int i,j,temp;
	for(i = 1 ; i < n ; i ++){
		for(j = i + 1 ; j <= n ; j ++){
			if(a[i] > a[j]){
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
}
void xoamang(int a[], int &n){
	int tg = -1 ;
	cout <<"\nXoa phan tu chia het cho 3 cuoi cung cua mang.";
	for(int i = n ; i >= 1 ; i--){
		if(a[i] % 3 == 0){
			tg = i;
			break;
		}
	}
	if (tg != -1){
	cout <<"\nMang sau khi xoa:\t";
		for(int i = tg; i < n; i++){
			a[i] = a[i+1];
		}
		for(int i=1; i < n; i++){
			cout << a[i] << "\t";
		}
	}
		else{
			cout <<"\nVan the:\t";
			for(int i=1; i <= n; i++){
			cout << a[i] << "\t";}
		}
		
}
int main(){
	int n=0, a[100];
	inputarrange (a,n);
	sapxep(a,n);
	showarrange(a,n);
	xoamang( a,n) ;
return 0 ;
}



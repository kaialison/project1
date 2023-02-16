#include<iostream>
using namespace std;
void inputArr(int a[], int n)
{
    for(int i=1; i <= n; i++)
    {
        cout << "a[" << i << "]= ";
        cin >> a[i];
    }

}
void showArr(int a[], int n)
{
    for(int i=1; i <= n; i++)
    {
        cout << a[i] <<  " ";
    }
}
bool kiemtra(int x)
{
    while(x >= 10)
    {
        x/=10;
    }
    if(x % 2 != 0) {
        return false;}
    else return true;
}
void lietke(int a[], int n)
{
    cout << "\nCac so do la:\n";
    for(int i = 1; i <= n; i++)
    {
        if(kiemtra(a[i]) == true)
        {
            cout <<a[i] << " ";
        }
    }
}
int main()
{
    int a[100], n;
    cin >> n;
    inputArr(a,n);
    cout << "Xuat mang:\n";
    showArr(a,n);
    lietke(a,n);

}
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of N: "; cin >> n;
    int *a = new int[n];
    int i;
    cout<<"INPUT ARRAY:" << endl;
    for(i = 0; i < n; i++)
    {
        cout<<"A[" << i <<"] = "; cin>>*(a + i);
    }
    ofstream outfile;
    outfile.open("FILETEST.txt", ios :: out);
    cin.ignore();
    for(i = 0; i < n; i++)
    {
        outfile <<*(a + i) <<"   ";
    }
    
    outfile.close();
}
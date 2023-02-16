#include<iostream>

using namespace std;

int main() {
    int n, a[1000];
    int i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i <= n; i++)
    {
        if (a[i] >= 0 && a[i] <= 10)
        cout << a[i] << " ";
    }
    return 0;
}
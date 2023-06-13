#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    a[0] = 0;
    a[1] = 1;
    if(n >= 1)
        cout << a[1] << " ";
    for(int i = 2; i <= n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
        cout << a[i] << " ";

    }
    return 0;
}

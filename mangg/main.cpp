#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++)
    {
        if(a[i] % 2 == 0)
            cout << a[i] << " ";
    }
    return 0;
}

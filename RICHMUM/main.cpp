#include <bits/stdc++.h>
using namespace std;
int n, s = 0;
int main()
{
    freopen("RICHMUM.inp", "r", stdin);
    freopen("RICHMUM.out", "w", stdout);
    cin >> n;
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
            s = s + i;
    }
    if(s > n)
        cout << 1;
    else
        cout << 0;
    return 0;
}

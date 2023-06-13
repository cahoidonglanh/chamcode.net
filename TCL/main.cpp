#include <bits/stdc++.h>
using namespace std;
int n, s = 0, ssh;
int main()
{
    freopen("TCL.inp", "r", stdin);
    freopen("TCL.out", "w", stdout);
    cin >> n;
    if(n % 2 == 0)
    {
        ssh = (n - 1) + 1;
        s = (n + 1) * ssh / 2;
    }else
    {
        for(int i = 1; i <= n; i++)
        {
            s = s - (i - 1) + i;
        }
    }
    cout << s << endl;
    if(n % 2 == 0)
        cout << 1;
    else
        cout << 0;
    return 0;
}

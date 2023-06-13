#include <bits/stdc++.h>
using namespace std;
int n, ssh = 0;
int main()
{
    cin >> n;
    int s = 0;
    if(n % 2 == 0)
        {ssh = (n - 1) + 1;
    s = (n + 1) * ssh / 2;}
    else
    {for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
            s -= i;
        else
            s += i;
    }
    }
    cout << s;
    return 0;
}

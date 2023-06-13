#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    int s = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        s += i;
    }
    if(2 * n < s)
        cout << n;
    else
        cout << 0;
    return 0;
}

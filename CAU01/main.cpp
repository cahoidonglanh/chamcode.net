#include <bits/stdc++.h>
using namespace std;
int n, gt = 1;
int main()
{
    float s = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        gt = gt * i;
    }
    int x;
    cin >> x;
    for(int i = 1; i <= n; i++)
    {
        s = 1 + (pow(x,2 * i)) / (2 * gt);
    }
    cout << s;
    return 0;
}

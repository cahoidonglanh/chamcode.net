#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int gt = 1;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        gt = gt * i;
    }
    cout << gt;
    return 0;
}

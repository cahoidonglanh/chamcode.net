#include <bits/stdc++.h>
using namespace std;

int main()
{
    float s = 1;
    int n;
    cin >> n;
    for(int i = 2; i <= n; i++)
    {
        s += 1/i;
    }
    cout << fixed << setprecision(6) << s;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int t;
    int s = 0;
    cin >> n;
    while(n > 0)
    {
       t = n % 10;
       s = s * 10 + t;
       n = n / 10;
    }
    cout << s;
    return 0;
}


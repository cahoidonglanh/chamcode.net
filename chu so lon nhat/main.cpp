#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int t;
    int maxx = INT_MIN;
    cin >> n;
    while(n > 0)
    {
        t = n % 10;
        n = n / 10;
        if(maxx < t)
            maxx = t;
    }
    cout << maxx;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int maxx = INT_MIN;
    if(a > b)
        {
            maxx = a;
        }else
        {
            if(a < b)
            maxx = b;
        }
    cout << maxx;
    return 0;
}

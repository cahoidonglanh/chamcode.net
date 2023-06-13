#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int maxx = d;
    if(maxx < a)
        maxx = a;
    else
        if(maxx < b)
        maxx = b;
    else
        if(maxx < c)
        maxx = c;
    cout << maxx;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int maxx = c;
    if(maxx < a)
        maxx = a;
    else
        if(maxx < b)
        maxx = b;
    cout << maxx;

    return 0;
}

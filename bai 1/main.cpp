#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, k, s = 0;
    cin >> a >> b >> k;
    s = a + b;
    if(s % k  == 0)
        cout << s;
    else
        cout << 0;
    return 0;
}

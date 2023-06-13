#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    float s;
    float p;
    if(a == b || a == c || b == c)
    {

    }else
    {
        p = (a + b + c) / 2;
        s = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << s << endl;
        cout << p;
    }
    cout << "NO";
    return 0;
}

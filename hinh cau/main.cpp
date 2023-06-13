#include <bits/stdc++.h>
using namespace std;

int main()
{
    double v = 0;
    double s = 0;
    float r;
    cin >> r;
    float pi = 3.14;
    s = 4 * pi * pow(r, 2);
    v = (4 / 3) * pi * (r * r * r);
    cout << v << " ";
    cout << s;
    return 0;
}

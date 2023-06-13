#include <bits/stdc++.h>
using namespace std;
float s = 0;
int main()
{
    int n;
    cin >> n;
    for(int i = 2; i <= n; i++)
    {
        s = (1 / 2) + (1 /(2 * i));
        cout << s;
    }
    return 0;
}

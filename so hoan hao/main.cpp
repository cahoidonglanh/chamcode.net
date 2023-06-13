#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s = 0;
    int n;
    cin >> n;
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            {
                s += i;
            }
        }
    }
    if(s == n)
        cout << "true";
    else
        cout << "false";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n >= 1 && n <= 12)
    {
        if(n >= 1 && n <= 7)
        {
            if(n % 2 != 0)
        {
            cout <<  "31";
        }else
        if(n == 2)
        {
            cout << "28";
        }else
        if(n % 2 == 0)
        {
            cout << "30";
            }
        }else
        if(n >= 8 && n <= 12)
        {
            if(n % 2 == 0)
            {
                cout << "31";
            }else
            if(n % 2 != 0)
            {
                cout << "30";
            }
        }

    }else
    cout << "NOT FOUND";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
string a, b;
int main()
{
    cin >> a >> b;
    for(int i = 0; i < a.size(); i++)
    {
            if(a[i] >= '0' && a[i] <= '9')
                cout << a[i];}
            for(int i = 0; i < b.size(); i++)
        {
                if(b[i] >= '0' && b[i] <= '9')
            cout << b[i];
        }
        a.size() = a.size() + b.size();
        cout << a.size();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
const int n = 1e7;
bool snt[n + 1];
void sang()
{
    for(int i = 2; i <= n; i++)
        snt[i] = true;
    {
        for(int i = 2; i <= sqrt(n); i++)
            if(snt[i] == true)
        {
            for(int j = 2 * i; j <= n; j += i)
                snt[j] = false;
        }
    }
}
int a;
int main()
{
    sang();
    cin >> a;
    for(int i = 2; i <= a; i++)
    {
        if(snt[i] == true)
            cout << 1;
        else
            cout << 0;
    }
    return 0;
}

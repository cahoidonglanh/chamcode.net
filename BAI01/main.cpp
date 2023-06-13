#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin >> n;
    int a[n + 1];
    int x[100001] = {0};
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++)
    {
        if(x[a[i]] == 0)
        cout << x[a[i]] << " ";
        x[a[i]] = 1;
    }
    return 0;
}

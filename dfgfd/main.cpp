#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a[n + 1];
    cin >> n;
    for(int i = 1;  i <= n; i++)
    {
        cin >> a[i];
    sort(a + 1, a + n + 1);
    }
     for(int i = 1; i <= n; i++)
        cout << a[i] << " ";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int d = 0;
int a[5] = {1, 2 ,3, 4, 5};
int main()
{
    int c;
    cin >> c;
    for(int i = 0; i <= a[5]; i++)
    {
        if(a[i] == c)
            d++;
    }
    cout << d;
    return 0;
}

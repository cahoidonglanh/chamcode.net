#include <bits/stdc++.h>
using namespace std;

int main()
{
    int maxx = INT_MIN;
    int minn = INT_MAX;
    int c;
    int a, b;
    cin >> a >> b;
    if(a > b)
        {
            maxx =a;
        c = b;
    }else
        {maxx = b;
        c = a;}
    for(int i = 1; i <= maxx; i++)
    {
        if(maxx % i == 0)
        {
                if(c % i == 0)
            {
                if(i < minn)
                minn = i;
            }
        }
    }
    cout << minn;
    return 0;
}

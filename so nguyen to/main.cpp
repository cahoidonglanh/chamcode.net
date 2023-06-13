#include <bits/stdc++.h>
using namespace std;
bool nt(int n)
{
    if(n < 2)
        return false;
    if(n > 2)
    {
        if(n % 2 == 0)
            return false;
    }
    for(int i = 3; i <= (float)n/2; i+=2
    )
    {
        if(n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    if(nt(n) == true)
        cout << "true";
    else
        cout << "false";
    return 0;
}

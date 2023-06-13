#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    cin.ignore(1);
    getline(cin, s);

    for(int i = 1; i <= n; i++)
        cout << s << endl;
    return 0;
}

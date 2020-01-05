#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;
    int el;
    while (n--)
    {
        cin >> el;
        int res = el / 2;
        int lado = res;
        res += el % 2;

        if (el < 4)
        {
            cout << 4 - el << endl;
        }
        else
            cout << (abs(lado - res)) << endl;
    }
    return 0;
}
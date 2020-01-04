#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int el;
    int tot = 0;
    while (n--)
    {
        cin >> el;
        tot += el;
    }

    cout << (!tot ? "EASY" : "HARD") << endl;

    return 0;
}
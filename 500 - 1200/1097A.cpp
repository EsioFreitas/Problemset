#include <bits/stdc++.h>
using namespace std;

int main()
{
    char suit, rank;
    bool ans = false;
    char el;

    cin >> rank >> suit;

    for (int i = 0; i < 5; i++)
    {
        cin >> el;
        if (el == rank){
            ans = true;
            break;
        }
        cin >> el;
        if (el == suit){
            ans = true;
            break;
        }
    }

    cout << (ans ? "YES" : "NO") << endl;

    return 0;
}
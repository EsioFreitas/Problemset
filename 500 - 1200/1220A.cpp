#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string line;
    cin >> line;

    map<char, int> m;

    for (auto c : line)
    {
        m[c]++;
    }

    int smaller1 = min(m['o'], min(m['n'], m['e']));
    m['o'] -= smaller1;
    int smaller0 = min(m['z'], min(m['e'], min(m['r'], m['o'])));

    while (smaller1--)
    {
        cout << "1 ";
    }

    while (smaller0--)
    {
        cout << "0 ";
    }

    cout << endl;

    return 0;
}
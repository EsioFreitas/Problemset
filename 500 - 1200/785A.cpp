#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> collection;
    collection["Tetrahedron"] = 4;
    collection["Cube"] = 6;
    collection["Octahedron"] = 8;
    collection["Dodecahedron"] = 12;
    collection["Icosahedron"] = 20;

    int n;
    cin >> n;
    string el;
    int ans = 0;
    while (n--)
    {
        cin >> el;
        ans += collection[el];
    }

    cout << ans << endl;
    return 0;
}
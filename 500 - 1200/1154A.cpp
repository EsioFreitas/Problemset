#include <bits/stdc++.h>
using namespace std;

int main()
{
    int el[4];
    cin >> el[0];
    cin >> el[1];
    cin >> el[2];
    cin >> el[3];

    sort(el, el + 4);

    cout << el[3] - el[0] << " ";
    cout << el[3] - el[1] << " ";
    cout << el[3] - el[2] << endl;

    return 0;
}
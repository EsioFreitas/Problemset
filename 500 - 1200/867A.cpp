#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string line;
    cin >> line;
    int s = 0, f = 0;

    char last = line[0];

    for (int i = 1; i < line.size(); i++)
    {
        if (line[i] == last)
        {
            last = line[i];
            continue;
        }
        else if (last == 'S')
            s++;
        else
            f++;

        last = line[i];
    }

    cout << (s > f ? "YES" : "NO") << endl;

    return 0;
}
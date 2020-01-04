#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, n;
    cin >> num >> n;
    while (n--)
    {
        if (num % 10)
            num--;
        else
            num /= 10;
    }

    cout << num << endl;

    return 0;
}
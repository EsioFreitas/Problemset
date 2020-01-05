#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int tot = 0;
    tot += n / 100;
    n = n % 100;
    tot += n / 20;
    n = n % 20;
    tot += n / 10;
    n = n % 10;
    tot += n / 5;
    n = n % 5;
    tot += n;
    cout << tot << endl;
    return 0;
}
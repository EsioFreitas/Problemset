#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string feeling = "", ans = "";
    int i = 1;
    while (i <= n)
    {
        if (i % 2)
            feeling = "hate";
        else
            feeling = "love";

        if (i == n)
            ans += ("I " + feeling + " it");
        else
            ans += ("I " + feeling + " that ");

        i++;
    }

    cout << ans << endl;
    return 0;
}
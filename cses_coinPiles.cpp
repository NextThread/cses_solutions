#include <bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
    int t;
    cin >> t;
    ll a, b;
    while (t--)
    {
        
        cin >> a >> b;

        // giving TLE

        // while (a != 0 && b != 0 && a > 0 && b > 0)
        // {
        //     if (a > b)
        //         a -= 2, b -= 1;
        //     else
        //         a -= 1, b -= 2;
        // }
        // if (a == b)
        //     cout << "YES" << endl;
        // else
        //     cout << "NO" << endl;

        cout << (((a + b) % 3 || min(a, b) < (a + b) / 3) ? "NO" : "YES") << "\n";
    }
}
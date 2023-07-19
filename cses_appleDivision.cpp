#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    vector<ll> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    ll ans = INT_MAX;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        ll s1 = 0, s2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            {
                s1 += p[i];
            }
            else
            {
                s2 += p[i];
            }
        }
        ans = min(ans, abs(s1 - s2));
    }
    cout << ans << "\n";
}

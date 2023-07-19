#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
int power(long long a, int b)
{
    int ret = 1;
    while (b > 0)
    {
        if (b & 1)
            ret = (ret * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return ret;
}
void solve(int tc = 0)
{
    int n;
    cin >> n;
    cout << power(2, n) << "\n";
}
signed main()
{
    int tc = 1;
    for (int t = 1; t <= tc; t++)
    {
        solve(t);
    }
}
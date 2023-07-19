#include <bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
    int n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int req = 1, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum + v[i] <= x)
            sum += v[i];
        else
        {
            req++;
            sum = 0;
        }
    }
    cout << req;
}
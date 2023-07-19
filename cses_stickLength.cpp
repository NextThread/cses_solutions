#include <bits/stdc++.h>
using namespace std;
main()
{
    long long n;
    cin >> n;
    vector<long long> a;
    for (long long i = 0; i < n; i++)
    {
        long long g;
        cin >> g;
        a.push_back(g);
    }
    long long ans = INT_MAX;
    for (long long i = 0; i < n; i++)
    {
        long long sum = 0;
        for (long long j = 0; j < n; j++)
        {
            sum += abs(a[i] - a[j]);
        }
        ans = min(ans, sum);
    }
    cout << ans;
}
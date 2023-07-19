#include <bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
    // int n;
    // cin >> n;
    // vector<ll> x(n);
    // for (int i = 0; i < n; i++)
    //     cin >> x[i];
    // vector<int> ans(n, 0);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i - 1; j >= 0; j--)
    //     {
    //         if (x[j] < x[i])
    //         {
    //             ans[i] = j + 1;
    //             j = 0;
    //         }
    //     }
    // }
    // for (auto it : ans)
    //     cout << it << " ";         giving TLE
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<int> ans(n, 0);
    stack<pair<int, int>> st;
    st.push(make_pair(-1, 0));
    for (int i = 0; i < n; i++)
    {
        pair<int, int> p = make_pair(v[i], i + 1);
        while (st.top().first >= p.first)
        {
            st.pop();
        }
        ans[i] = st.top().second;
        st.push(p);
    }
    for (auto it : ans)
        cout << it << " ";
}
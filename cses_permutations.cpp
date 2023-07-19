#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> a;
    vector<int> b;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        v[i] = i + 1;
        if (v[i] % 2 == 1)
            a.push_back(v[i]);
        else
            b.push_back(v[i]);
    }
    for (int i = 0; i < b.size(); i++)
        ans.push_back(b[i]);
    for (int i = 0; i < a.size(); i++)
        ans.push_back(a[i]);
    for (int i = 0; i < ans.size() - 1; i++)
    {
        if (abs(ans[i] - ans[i + 1]) == 1)
        {
            cout << "NO SOLUTION";
            return 0;
        }
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}
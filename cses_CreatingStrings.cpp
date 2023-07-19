#include <bits/stdc++.h>
using namespace std;
main()
{
    string s;
    cin >> s;
    int n = s.length();
    vector<string> st;
    for (int i = 0; i < n; i++)
    {
        string a = "";
        for (int j = 0; j < n; j++)
        {
            a += s[i];
        }
        if (a.length() == n)
            st.push_back(a);
    }
    for (int i = 0; i < st.size(); i++)
        cout << st[i] << endl;
}
#include <bits/stdc++.h>
using namespace std;
main()
{
    string a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b[0])
        {
            int temp = i;
            int j = 0;
            while (j < b.length())
            {
                if (a[temp] == b[j])
                {
                    temp++;
                    j++;
                }
                else
                {
                    j = 0;
                    break;
                }
            }
            if (j == b.length())
                cnt++;
        }
    }
    cout << cnt;
}
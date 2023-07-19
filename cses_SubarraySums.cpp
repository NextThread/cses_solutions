#include <bits/stdc++.h>
// #include <boost/math/common_factor.hpp>
using namespace std;

//---- ---------------------------------TEMPLATES--------------------------------------//

#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "w", stdout)
#define file_io read; // write
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define rtx return 0;
#define pi 3.14159265358979323846
#define ll long long
#define niche endl
// -----------------------------------<STLs>----------------------------------//

#define vv vector
#define eb emplace_back
#define pb push_back

#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vf vector<float>
#define vd vector<double>

#define pii pair<int, int>
#define pllll pair<ll, ll>
#define pill pair<int, ll>
#define plli pair<ll, int>
#define pllc pair<ll, char>
#define pcll pair<char, ll>
#define plls pair<ll, string>
#define psll pair<string, ll>

// ----------------------------------</STLs>-----------------------------------//

#define MEM(a, v) memset(a, v, sizeof(a))
#define SET(a) memset(a, -1, sizeof(a))
#define CLR(a) memset(a, 0, sizeof(a))
#define _max *max_element
#define _min *min_element
#define SUM accumulate
#define all(container) container.begin(), container.end()
#define remax(a, b) a = max(a, b)
#define remin(a, b) a = min(a, b)
#define inrange(i, a, b) ((i >= min(a, b)) && (i <= max(a, b)))
#define present(c, x) ((c).find(x) != (c).end())
#define cpresent(c, x) (find(all(c), x) != (c).end())

#define line cout << "\n";
#define gap cout << " ";
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define casee cout << "Case " << t++ << ": "

#define sp(x) cout << setprecision(x) << fixed;
#define PI acos(-1.0)
#define eps 1e-12
#define fo(i, n) for (int i = 0; i < n; i++)
// -----------------------------</SCANF>-------------------------------//
#define sfi(a) scanf("%d", &a);
#define sfi2(a, b) scanf("%d %d", &a, &b);
#define sfi3(a, b, c) scanf("%d %d %d", &a, &b, &c);

#define sfc(a) scanf("%ch", &a);
#define sfc2(a, b) scanf("%ch %ch", &a, &b);

#define sfd(a) scanf("%lf", &a);
#define sfd2(a, b) scanf("%lf %lf", &a, &b);
#define sfd3(a, b, c) scanf("%lf %lf %lf", &a, &b, &c);

#define sfll(a) scanf("%lld", &a);
#define sfll2(a, b) scanf("%lld %lld", &a, &b);
#define sfll3(a, b, c) scanf("%lld %lld %lld", &a, &b, &c);

#define sfs(x) scanf("%s", x);
#define sfs2(x, y) scanf("%s %s", x, y);
#define sfs3(x, y, z) scanf("%s %s %s", x, y, z);
// ------------------------------------</SCANF>-------------------------------------//

// ------------------------------------<PRINTF>-------------------------------------//
#define pfi(x) printf("%d\n", x);
#define pfi2(x, y) printf("%d %d\n", x, y);
#define pfi3(x, y, z) printf("%d %d %d\n", x, y, z);

#define pfl(x) printf("%lld\n", x);
#define pfl2(x, y) printf("%lld %lld\n", x, y);
#define pfl3(x, y, z) printf("%lld %lld %lld\n", x, y, z);

#define pfs(x) printf("%s\n", x);
#define pfs2(x, y) printf("%s %s\n", x, y);
#define pfs3(x, y, z) printf("%s %s %s\n", x, y, z);

#define pwe(x) printf("%lld ", x); // print without end
// -------------------------------------</PRINTF>----------------------------------//

// --------------------------------------<COUT>-------------------------------------//
#define cot(x) cout << x << endl;
#define cote(x) cout << x << " "; // cout without endl
#define cot2(x, y) cout << x << " " << y << endl;
#define cot3(x, y, z) cout << x << " " << y << " " << z << endl;
#define cot4(x, y, z) cout << x << " " << y << " " << z << " " << zz << endl;
// ------------------------------------</COUT>---------------------------------------//

const int big = INT_MAX;
const int smol = INT_MIN;
const long long mod = 100000007;
const int INT5 = 1e5 + 5;
const int INT6 = 1e6 + 6;
const int INT7 = 1e7 + 7;
const int INT8 = 1e8 + 8;
const long long INT9 = 1e9 + 9;
const long long INT12 = 1e12 + 12;

main()
{
    ll n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += abs(a[i] - a[j]);
        }
        ans = min(ans, sum);
    }
    cout << ans;
}
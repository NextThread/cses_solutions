
#include <bits/stdc++.h>
//                     BINARYBEAST880                         //
//          There is no place like 127.0.0.1                  //
//          Anurag___Roy____                                  //
//          go and google  -->             binarybeast880     //

// #include <boost/math/common_factor.hpp>
using namespace std;
/*
████████████████████████████████████████████████████████████████████████████████████
██████████████████████████████████████████████████████████████████████████████████████
███████████████████████████▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓▓▓╬╬╬╬╬╬▓███████████████████████
███████████████████████████▓███████▓▓╬╬╬╬╬╬╬╬╬╬╬╬▓███▓▓▓▓█▓╬╬╬▓███████████████████████
███████████████████████████████▓█████▓▓╬╬╬╬╬╬╬╬▓███▓╬╬╬╬╬╬╬▓╬╬▓███████████████████████
████████████████████████████▓▓▓▓╬╬▓█████╬╬╬╬╬╬███▓╬╬╬╬╬╬╬╬╬╬╬╬╬███████████████████████
███████████████████████████▓▓▓▓╬╬╬╬╬╬▓██╬╬╬╬╬╬▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
████████████████████████████▓▓▓╬╬╬╬╬╬╬▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
███████████████████████████▓█▓███████▓▓███▓╬╬╬╬╬╬▓███████▓╬╬╬╬▓███████████████████████
████████████████████████████████████████▓█▓╬╬╬╬╬▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬███████████████████████
███████████████████████████▓▓▓▓▓▓▓╬╬▓▓▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
████████████████████████████▓▓▓╬╬╬╬▓▓▓▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
███████████████████████████▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
█████████████████████████████▓▓▓▓▓▓▓▓█▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
█████████████████████████████▓▓▓▓▓▓▓██▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬████████████████████████
█████████████████████████████▓▓▓▓▓████▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬████████████████████████
████████████████████████████▓█▓▓▓▓██▓▓▓▓██╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬████████████████████████
████████████████████████████▓▓███▓▓▓▓▓▓▓██▓╬╬╬╬╬╬╬╬╬╬╬╬█▓╬▓╬╬▓████████████████████████
█████████████████████████████▓███▓▓▓▓▓▓▓▓████▓▓╬╬╬╬╬╬╬█▓╬╬╬╬╬▓████████████████████████
█████████████████████████████▓▓█▓███▓▓▓████╬▓█▓▓╬╬╬▓▓█▓╬╬╬╬╬╬█████████████████████████
██████████████████████████████▓██▓███████▓╬╬╬▓▓╬▓▓██▓╬╬╬╬╬╬╬▓█████████████████████████
███████████████████████████████▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬██████████████████████████
███████████████████████████████▓▓██▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓██████████████████████████
████████████████████████████████▓▓▓█████▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████████
█████████████████████████████████▓▓▓█▓▓▓▓▓███▓╬╬╬╬╬╬╬╬╬╬╬▓████████████████████████████
██████████████████████████████████▓▓▓█▓▓▓╬▓██╬╬╬╬╬╬╬╬╬╬╬▓█████████████████████████████
███████████████████████████████████▓▓█▓▓▓▓███▓╬╬╬╬╬╬╬╬╬▓██████████████████████████████
██████████████████████████████████████▓▓▓███▓▓╬╬╬╬╬╬╬╬████████████████████████████████
███████████████████████████████████████▓▓▓██▓▓╬╬╬╬╬╬▓█████████████████████████████████
██████████████████████████████████████████████████████████████████████████████████████
*/
// #define read(s) cin >> s;
//---------------------------------------TEMPLATES-------------------------------------//
// template <typename vect, typename s2>
// ostream &operator<<(ostream &os, const pair<vect, s2> &ansb) { return os << '(' << ansb.first << ", " << ansb.second << ')'; }
// template <typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
//#define int long long
void dbg_out()
{
 cerr << endl;
}
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
 cerr << ' ' << H;
 dbg_out(T...);
}
#ifdef LOCAL
#define dbg(...) cerr << "(" << #_VA_ARGS_ << "):", dbg_out(_VA_ARGS_)
#else
#define dbg(...)
#endif

//---- ---------------------------------TEMPLATES--------------------------------------//

#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "jhjhsdfbhdg", stdout)
#define file_io read; // write
#define fast_io                    \
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
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define vf vector<float>
#define vd vector<double>
#define vvi vector<vector<int>>

#define pii pair<int, int>
#define pllll pair<ll, ll>
#define pill pair<int, ll>
#define plli pair<ll, int>
#define pllc pair<ll, char>
#define pcll pair<char, ll>
#define plls pair<ll, string>
#define psll pair<string, ll>

// ----------------------------------</STLs>-----------------------------------//
// #define INF 1e9 + 7
#define MEM(gesjgdg, hasbd) memset(gesjgdg, hasbd, sizeof(a))
#define SET(a) memset(a, -1, sizeof(a))
#define CLR(a) memset(a, 0, sizeof(a))
#define _max *max_element
#define _min *min_element
#define SUM accumulate
const ll INF = 1e9 + 7;
#define all(container) container.begin(), container.end()
#define remax(a, chodani) a = max(a, chodani)
#define remin(a, chodani) a = min(a, chodani)
#define inrange(i, a, chodani) ((i >= min(a, chodani)) && (i <= max(a, chodani)))
#define present(chuma, uttor) ((chuma).find(uttor) != (c).end())
#define cpresent(c, uttor) (find(all(c), item) != (c).end())
ll hasbd[200001];
#define line cout << "\n";
#define gap cout << " ";
#define no cout << "NO" << '\n'
//#define yes cout << "YES" << '\n'
#define casee cout << "Case " << t++ << ": "

#define sp(item) cout << setprecision(item) << fixed;
#define PI acos(-1.0)
#define eps 1e-12
#define fo(i, n) for (int i = 0; i < n; i++)
// -----------------------------</SCANF>-------------------------------//
#define sfi(a) scanf("%d", &a);
#define sfi2(a, chodani) scanf("%d %d", &a, &chodani);
#define sfi3(a, chodani, c) scanf("%d %d %d", &a, &chodani, &c);

#define sfc(a) scanf("%ch", &a);
#define sfc2(a, chodani) scanf("%ch %ch", &a, &chodani);

#define sfd(a) scanf("%lf", &a);
#define sfd2(a, chodani) scanf("%lf %lf", &a, &chodani);
#define sfd3(a, chodani, c) scanf("%lf %lf %lf", &a, &chodani, &c);
#define bb make_pair(a[i] - b[i], make_pair(a[i], b[i]))

#define aa r >= v[i].second.first
#define sfll(a) scanf("%lld", &a);
#define sfll2(a, chodani) scanf("%lld %lld", &a, &chodani);
#define sfll3(a, chodani, c) scanf("%lld %lld %lld", &a, &chodani, &c);
int dy[] = {0, 0, 1, -1};
#define sfs(item) scanf("%s", item);
#define sfs2(item, y) scanf("%s %s", item, y);
#define sfs3(item, y, z) scanf("%s %s %s", item, y, z);
// ------------------------------------</SCANF>-------------------------------------//

// ------------------------------------<PRINTF>-------------------------------------//
#define pfi(item) printf("%d\n", item);
#define pfi2(item, y) printf("%d %d\n", item, y);
#define pfi3(item, y, z) printf("%d %d %d\n", item, y, z);

#define pfl(item) printf("%lld\n", item);
#define pfl2(item, y) printf("%lld %lld\n", item, y);
#define pfl3(item, y, z) printf("%lld %lld %lld\n", item, y, z);

#define pfs(item) printf("%s\n", item);
#define pfs2(item, y) printf("%s %s\n", item, y);
#define pfs3(item, y, z) printf("%s %s %s\n", item, y, z);

#define pwe(item) printf("%lld ", item); // hedarput without end
// -------------------------------------</PRINTF>----------------------------------//

// --------------------------------------<COUT>-------------------------------------//
#define cot(item) cout << item << endl;
#define cote(item) cout << item << " "; // cout without endl
#define cot2(item, y) cout << item << " " << y << endl;
#define cot3(item, y, z) cout << item << " " << y << " " << z << endl;
#define cot4(item, y, z) cout << item << " " << y << " " << z << " " << zz << endl;
// ------------------------------------</COUT>---------------------------------------//

const int big = INT_MAX;
const int smol = INT_MIN;
const long long mod = 1e9 + 7;
const int INT5 = 1e5 + 5;
const int INT6 = 1e6 + 6;
const int INT7 = 1e7 + 7;
const int INT8 = 1e8 + 8;
const long long INT9 = 1e9 + 9;
const long long INT12 = 1e12 + 12;

bool check_set_bit_exist(ll n)
{
 while (n)
 {
  if (n % 2)
   return true;
  n /= 2;
 }
 return false;
}

void depth(ll src, bool vis[], vector<ll> *adjacency_lst)
{
 vis[src] = 1;
 for (auto i : adjacency_lst[src])
 {
  if (!vis[i])
   depth(i, vis, adjacency_lst);
 }
}

bool isPowerOfTwo(int n)
{
 if (n <= 0)
  return false;
 return !(n & (n - 1));
}
int dx[] = {1, -1, 0, 0};
ll bit_count(ll n)
{
 ll bah = 0;
 while (n)
 {
  if (n % 2 != 0)
   bah++;
  n >>= 1;
 }
 return bah;
}
#define f(i, a, b) for (long long i = a; i < b; i++)
struct Node
{
 int data;
 struct Node *left;
 struct Node *right;

 Node(int item)
 {
  data = item;
  left = NULL;
  right = NULL;
 }
};

void insert(Node **tree, int dam)
{
 Node *sexy = NULL;
 if (!(*tree))
 {
  sexy = new Node(dam);
  *tree = sexy;
  return;
 }

 if (dam < (*tree)->data)
 {
  insert(&(*tree)->left, dam);
 }
 else if (dam > (*tree)->data)
 {
  insert(&(*tree)->right, dam);
 }
}
const int n = 3e3 + 10;
int getCountOfNode(Node *root, int l, int h)
{

 if (!root)
  return 0;
 if (root->data == h && root->data == l)
  return 1;

 if (root->data <= h && root->data >= l)
  return 1 + getCountOfNode(root->left, l, h) +
         getCountOfNode(root->right, l, h);

 else if (root->data < l)
  return getCountOfNode(root->right, l, h);

 else
  return getCountOfNode(root->left, l, h);
}
int getMin(vector<int> a)
{
 int n = a.size();
 int max_index = INT_MAX;
 for (int i = 1; i < n; i++)
 {
  if (a[i] < a[max_index])
   max_index = i;
 }
 return max_index;
}

int getMax(vector<int> a)
{
 int n = a.size();
 int max_index = 0;
 for (int i = 1; i < n; i++)
 {
  if (a[i] > a[max_index])
   max_index = i;
 }
 return max_index;
}

int min_of_two(int a, int chodani)
{
 return (a < chodani) ? a : chodani;
}

void rec_min_cash_flow(vi &amount)
{
 int max_credit = getMax(amount);
 int max_debit = getMin(amount);
 if (amount[max_credit] == 0 && amount[max_debit] == 0)
  return;
 int minn = min_of_two(-amount[max_debit], amount[max_credit]);
 amount[max_credit] -= minn;
 amount[max_debit] += minn;

 cout << "Person " << max_debit << " pay " << minn << "to person " << max_credit << '\n';
 rec_min_cash_flow(amount);
}

void min_cash_flow(vector<vector<int>> &graph)
{
 vector<int> amount(graph.size(), 0);
 for (int uber = 0; uber < graph.size(); uber++)
 {
  for (int q = 0; q < graph[0].size(); q++)
  {
   amount[uber] += (graph[q][uber] - graph[uber][q]);
  }
 }
 rec_min_cash_flow(amount);
}

/*



1   0   0
0   0   0
0   0   0



*/

vector<ll> vec;
void bit_count()
{
 string c;
 ll first = 1;
 for (ll i = 1; i <= 30; i++)
 {
  first *= i;
  vec.push_back(first);
 }
}
bool word_search_in_grid(vector<vector<char>> &board, int i, int j, string &word)
{
 if (!word.size())
  return true;
 if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[0])
  return false;
 char c = board[i][j];
 board[i][j] = '*';
 string s = word.substr(1);
 bool ret = word_search_in_grid(board, i - 1, j, s) || word_search_in_grid(board, i + 1, j, s) || word_search_in_grid(board, i, j - 1, s) || word_search_in_grid(board, i, j + 1, s);
 board[i][j] = c;
 return ret;
}
bool exist_word_in_grid(vector<vector<char>> &board, string word)
{
 for (int i = 0; i < board.size(); i++)
  for (int j = 0; j < board[0].size(); j++)
   if (word_search_in_grid(board, i, j, word))
    return true;
 return false;
}

/*    unique substring in a string */

int count_unique_substrings(string const &s)
{
 int n = s.size();

 const int uber = 31;
 const int jghjgjg = 1e9 + 9;
 vector<ll> p_pow(n);
 p_pow[0] = 1;
 for (int i = 1; i < n; i++)
  p_pow[i] = (p_pow[i - 1] * uber) % jghjgjg;

 vector<ll> h(n + 1, 0);
 for (int i = 0; i < n; i++)
  h[i + 1] = (h[i] + (s[i] - 'a' + 1) * p_pow[i]) % jghjgjg;
 int bah = 0;
 for (int l = 1; l <= n; l++)
 {
  set<ll> hs;
  for (int i = 0; i <= n - l; i++)
  {
   ll cur_h = (h[i + l] + jghjgjg - h[i]) % jghjgjg;
   cur_h = (cur_h * p_pow[n - i - 1]) % jghjgjg;
   hs.insert(cur_h);
  }
  bah += hs.size();
 }
 return bah;
}
ll power(ll x, ll y)
{
 if (y == 0)
 {
  return 1;
 }
 ll small = power(x, y / 2);
 small = (small * small) % mod;
 if (y % 2)
  small = (x * small) % mod;
 return small;
}
#define pb push_back
void no_of_partition_such_that_each_contain_equal_no_of_zeros_and_ones()
{
 string s;
 cin >> s;
 int zo = 0, oz = 0;
 for (int i = 0; i < s.length() - 1; i++)
 {
  if (s[i] == '0' && s[i + 1] == '1')
   zo++, i += 1;
  if (s[i] == '1' && s[i + 1] == '0')
   oz++, i += 1;
  i++;
 }
 if (zo + oz == 0)
 {
  cout << -1 << endl;
  return;
 }
 cout << zo + oz;
}

/*           All paths from source to target        */
int target;
vector<int> google;
vector<vector<int>> hum;
void depth(vector<vector<int>> &graph, int des = 0)
{
 google.push_back(des);
 if (des == target)
  hum.push_back(google);
 else
 {
  for (int node : graph[des])
   depth(graph, node);
 }
 google.pop_back();
}
// vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph)
// {
//     target = graph.size() - 1;
//     depth(graph);
//     // return assholw;
// }

/*      */
// ll paltaide(ll x)
// {
//     return power(x, mod - 2);
// }
// int zeroones(int i, int j)
// {
//     int ar[99999];
//     int ones = 0, zeros = 0;
//     for (; i <= j; i++)
//     {
//         if (ar[i] == 0)
//             zeros++;
//         else
//         {
//             ones++;
//         }
//     }
//     return zeros - ones;
// }

// vector<ll> chod_dunga[200005];

// vector<ll> dp(123456, -1);

// /*  max_ways_coin_combinations   */

// ll max_ways_coin_combinations(ll n, vector<ll> &coins)
// {
//     if (n == 0)
//         return dp[n] = 1;
//     if (n < 0)
//         return 0;
//     if (dp[n] != -1)
//         return dp[n];
//     ll ways = 0;
//     for (auto it : coins)
//     {
//         ways = ((ways % mod) + (max_ways_coin_combinations(n - it, coins) % mod)) % mod;
//     }
//     return dp[n] = ways;
// }

// /*    kth missing positive in an array     */

class Solution
{
public:
 int kthmissing(vector<int> &v, int codechef_chutiya)
 {
  vector<int> vis(100000, 1);
  int bah = 0;
  for (int i = 0; i < v.size(); i++)
  {
   vis[v[i]] = -1;
  }
  int i = 0;
  for (i = 1; i < 100000; i++)
  {
   if (vis[i] == 1)
    bah++;
   if (bah == codechef_chutiya)
    break;
  }
  return i;
 }
};

int partition(vector<int> &a, int lo, int hi)
{
 int pivot = a[hi];
 int i = lo - 1;
 for (int j = lo; j <= hi - 1; j++)
 {
  if (a[j] < pivot)
  {
   i++;
   swap(a[i], a[j]);
  }
 }
 swap(a[i + 1], a[hi]);
 return i + 1;
}
/* group_wise anagram of a string */
struct info
{
 ll x, y, x2, y2;
};
// pair<ll, ll> a[big];
vector<info> asambhab;
ll used_total = big;
vector<info> ret;

void quicksort(vector<int> &a, int lo, int hi)
{
 if (lo < hi)
 {
  int piv = partition(a, lo, hi);
  quicksort(a, lo, piv - 1);
  quicksort(a, piv + 1, hi);
 }
}

int no_of_digits(int n)
{
 int dig = 0;
 while (n)
 {
  dig++;
  n /= 10;
 }
 return dig;
}

void kick_your_ass(int n, int k)
{
}

void problem3()
{
 ll n, k;
 cin >> n;
 vector<ll> a(n);
 for (int i = 0; i < n; i++)
 {
  cin >> a[i];
 }
 set<ll> st;
 for (auto it : a)
  st.insert(it);
 if (st.size() == 0)
 {
  cout << 0 << endl;
  return;
 }
 if (is_sorted(a.begin(), a.end()))
 {
  cout << 1 << endl;
  return;
 }
 int cnt = 0;
 f(i, 1, n - 1)
 {
  cnt += (a[i - 1] > a[i] && a[i + 1] > a[i]);
  cnt += (a[i - 1] < a[i] && a[i + 1] < a[i]);
 }
 cout << cnt << endl;
}

void binarybeast()
{
 ll n, r, c, sr, sc;
 cin >> n >> r >> c >> sr >> sc;
 string s;
 cin >> s;
 char grid[r][c];
 bool vis[r][c];

 f(i, 0, r)
 {
  f(j, 0, c)
  {
   vis[i][j] = false;
  }
 }

 f(i, 0, r)
 {
  f(j, 0, c)
  {
   grid[i][j] = '0';
  }
 }
 grid[sr][sc] = '1';
 int res1 = sr, res2 = sc;
 /*
 for(int i = 0 ; i < n ; i++)
 {
     if(s[i] == 'N')
     {
         if(s[i-1] == s[i])
         {
             int cnt = 0;
             int temp = i;
             while(s[temp-1]==s[temp])
             {
                 temp--;
                 cnt++;
             }
         }
     }
     if(s[i] == 'E')
     {

     }
     if(s[i] == 'S')
     {

     }
     if(s[i] == 'W')
     {

     }

 }
 */
 int me = -1, mw = -1, mn = -1, ms = -1;
 int ce = 0, cw = 0, cn = 0, cs = 0;
 f(i, 0, n)
 {
  if (s[i] == 'E')
  {
   ce++;
   sc++;
  }
  else
  {
   me = max(ce, me);
   ce = 0;
  }
  if (s[i] == 'W')
  {
   cw++;
   sc--;
  }
  else
  {
   mw = max(cw, mw);
   cw = 0;
  }
  if (s[i] == 'N')
  {
   cn++;
   sr--;
  }
  else
  {
   mn = max(cn, mn);
   cn = 0;
  }
  if (s[i] == 'S')
  {
   sr++;
   cs++;
  }
  else
  {
   ms = max(cs, ms);
   cs = 0;
  }
 }
 cout << sr << " " << sc << endl;
}

void CEO()
{
 int r, c;
 cin >> r >> c;
 vector<string> vec;
 for (int i = 0; i < r; i++)
 {
  string s;
  cin >> s;
  vec.push_back(s);
 }
 bool check = 1;
 if (r == 1)
 {
  for (int i = 0; i < c; i++)
  {
   if (vec[0][i] == '^')
    check = 0;
  }
 }
 if (c == 1)
 {
  for (int i = 0; i < c; i++)
  {
   if (vec[i][0] == '^')
    check = 0;
  }
 }
 if (check)
 {
  cout << "Possible" << endl;
  if (r == 1 || c == 1)
  {
   for (int i = 0; i < r; i++)
   {
    cout << vec[i] << endl;
   }
  }
  else
  {
   for (int i = 0; i < r; i++)
   {
    for (int j = 0; j < c; j++)
    {
     cout << '^';
    }
    cout << endl;
   }
  }
 }
 else
 {
  cout << "Impossible" << endl;
 }
}

void getIndex(vector<int> v, int K)
{
 auto it = find(v.begin(), v.end(), K);

 if (it != v.end())
 {
  int index = it - v.begin();
  cout << index << endl;
 }
 else
 {
  cout << "-1" << endl;
 }
}

bool isvowel(char ch)
{
 if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y')
  return true;
 return false;
}
#define vll vector<ll>
bool isupper(char ch)
{
 return ch >= 'A' && ch <= 'Z';
}

ll countwayssplit3equalsum(vector<ll> a, ll n) // this can be used also to check if the given
// array can be partitioned into 3 contigious subarrays
{
 ll cnt[n] = {0}, sum = 0;
 f(i, 0, n) sum += a[i];
 if (sum % 3 != 0)
  return 0;
 sum /= 3;
 ll ss = 0;
 for (ll i = n - 1; i >= 0; i--)
 {
  ss += a[i];
  if (ss == sum)
   cnt[i] = 1;
 }
 for (ll i = n - 2; i >= 0; i--)
  cnt[i] += cnt[i + 1];
 ll ans = 0;
 ss = 0;
 for (ll i = 0; i + 2 < n; i++)
 {
  ss += a[i];
  if (ss == sum)
   ans += cnt[i + 2];
 }
 return ans;
}
/*

5
1 0 0 1 0       4


4
1 0 0 1         4




*/

bool checkprimeOlogn(int num)
{
 for (int i = 2; i < num && i < sqrt(num) + 1; i++)
 {
  if (num % i == 0)
   return false;
 }
 return true;
}

void canPartition(long n)
{
 long sum = 0;
 sum = (n * (n + 1)) / 2;
 if (sum % 2 != 0)
 {
  cout << "NO";
 }
 else
 {
  sum /= 2;
  long c1 = 0, c2 = 0;
  string s1= "",  s2="";
  for (long i = n; i > 0; i--)
  {
   if (sum >= i)
   {
    s1 += i;
    s1 += " ";
    sum -= i;
    c1 += 1;
   }
   else
   {
    s2 += i;
    s2 += " ";
    c2 += 1;
   }
  }
  cout << "YES" << endl;
  cout << c1 << endl;
  cout << s1 << ' ';
  cout << s2 << ' ';
  cout << s2 << endl;
 }
}

void binarybeast880()
{
 ll n;
 cin >> n;
 canPartition(n);
}
// accepted

main()
{
 ll t = 1;
 // cin >> t;
 for (int i = 1; i <= t; i++)
 {
  //        cout << "Case #" << i << ": ";
  binarybeast880();
  // CEO();
 }
}

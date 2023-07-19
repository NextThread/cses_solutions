#include<bits/stdc++.h>
using namespace std;
#define int long long
int mod = (int)(2*(1e9+7));
    int f(vector<vector<char> > &obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        vector<int>prev(m, 0);
        for(int i = 0 ; i < n ; i++)
        {
            vector<int>cur(m, 0);
            for(int j = 0 ; j < m ; j++)
            {
                if(obstacleGrid[i][j] == '*') cur[j] = 0;
                else if(i == 0 && j == 0) cur[j] = 1;
                else{
                    int up = 0, left = 0;
                    if(i > 0) up = prev[j];
                    if(j > 0) left = cur[j-1];
                    cur[j] = (up+left)%mod;
                }
            }
            prev = cur;
        }
        return prev[m-1]%mod;
    }
main(){
	int n;
	cin>>n;
	vector<vector<char>> grid(n, vector<char>(n));
	vector<vector<int>> dp(n, vector<int>(n, -1));
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < n ; j++) cin>>grid[i][j];
	}
//	cout<<f(n-1, n-1, grid, dp);
    cout<<f(grid);
}
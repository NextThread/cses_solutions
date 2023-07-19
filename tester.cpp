#include <bits/stdc++.h>
using namespace std;

#define ll long long
main(){
	ll n, k;
	cin>>n>>k;
	vector<int>a(n);
	for(int i = 0 ; i < n ; i++) cin>>a[i];
	ll sum = accumulate(a.begin(), a.end(), 0);
	ll div = sum/k;
	if(div*k < sum) div++;
	cout<<div;
}
#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin>>a[i];
	int m; cin>>m;
	int b[m];
	for(int i = 0; i < m; i++)
		cin>>b[i];

	int max_ratio = 1;
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = m-1; j >= 0 && b[j] >= a[i]; j--)
		{
			if(b[j]%a[i] == 0 && max_ratio < b[j]/a[i]){
				max_ratio = b[j]/a[i];
				count = 0;
			}
			if(b[j]%a[i] == 0 && max_ratio == b[j]/a[i])
				count++;
		}
	}
	cout<<count;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
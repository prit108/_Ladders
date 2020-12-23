#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;
	cin>>n>>m;
	vector<int> gains;
	for(int i = 0; i < n; i++)
	{
		int x;
		cin>>x;
		if(x < 0)
			gains.push_back(x);
	}
	sort(gains.begin(), gains.end());
	int i = 0;
	int sum = 0;
	int lim = gains.size();
	while(i < m && i < lim)
	{
		sum += gains[i];
		i++;
	}
	cout<<-sum<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
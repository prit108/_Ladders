#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;
	cin>>n>>m;
	int max = 0;
	int ind = 0;
	for(int i = 1; i <= n; i++)
	{
		int x;
		cin>>x;
		if((int)ceil(x*1.00/m) >= max)
		{
			max = (int)ceil(x*1.00/m);
			ind = i;
		}
	}
	cout<<ind;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
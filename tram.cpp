#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int cap = 0, curr = 0;
	for(int i = 0; i < n; i++)
	{
		int a,b;
		cin>>a>>b;
		curr += b-a;
		if(curr>cap)
			cap = curr;
	}
	cout<<cap<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	if(n%2)
		cout<<"-1\n";
	else
	{
		for(int i = 1; i < n; i+=2)
		{
			cout<<i+1<<" "<<i<<" ";
		}
		cout<<endl;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
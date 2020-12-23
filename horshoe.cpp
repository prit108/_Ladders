#include <bits/stdc++.h>
using namespace std;

void solve(){
	int a[4];
	cin>>a[0]>>a[1]>>a[2]>>a[3];
	sort(a,a+4);
	int ans = !(a[1] - a[0]) + !(a[2] - a[1]) + !(a[3] - a[2]);
	cout<<ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
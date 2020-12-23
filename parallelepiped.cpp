#include <bits/stdc++.h>
using namespace std;

void solve(){
	int ab,bc,ac;
	cin>>ab>>bc>>ac;
	int ans = (int)4*(sqrt(ab*ac*1.00/bc) + sqrt(ab*bc*1.00/ac) + sqrt(bc*ac*1.00/ab));
	cout<<ans<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
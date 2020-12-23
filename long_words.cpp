#include <bits/stdc++.h>
using namespace std;

void solve(){
	int a; cin>>a;
	while(a--){
		string str;
		cin>>str;
		int n = str.length();
		if(n>10)
			cout<<str[0]<<(n-2)<<str[n-1];
		else
			cout<<str;
		cout<<"\n";
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
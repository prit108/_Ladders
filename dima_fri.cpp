#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int shown = 0;
	for(int i = 0; i < n; i++){
		int x;
		cin>>x;
		shown+=x;
	}
	n++;
	shown%=n;
	int count = 0;
	for(int i = 1; i <= 5; i++){
		if((shown+i)%n != 1)
			count++;
	}
	cout<<count<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
#include <bits/stdc++.h>
using namespace std;

void solve(){
	string str;
	cin>>str;
	int flag = 0;
	for(int i = 0; i < str.length(); i++)
	{
		if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9'){
			flag = 1;
			break;
		}
	}
	if(flag)
		cout<<"YES\n";
	else
		cout<<"NO\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
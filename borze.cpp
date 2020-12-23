#include <bits/stdc++.h>
using namespace std;

void solve(){
	string code;
	cin>>code;
	for(int i = 0; i < code.length(); i++)
	{
		if(code[i] == '-' && code[i+1] == '-'){
			cout<<2;
			i++;
		}
		else if(code[i] == '-' && code[i+1] == '.'){
			cout<<1;
			i++;
		}
		else if(code[i] == '.'){
			cout<<0;
		}
	}
	cout<<"\n";

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
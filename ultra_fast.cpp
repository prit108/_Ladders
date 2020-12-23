#include <bits/stdc++.h>
using namespace std;

void solve(){
	string a,b;
	cin>>a>>b;
	for(int i = 0; i < a.length(); i++)
	{
		if(a[i] == b[i])
			cout<<"0";
		else
			cout<<"1";
	}
	cout<<endl;

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
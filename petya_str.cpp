#include <bits/stdc++.h>
using namespace std;

void solve(){
	string a,b;
	cin>>a>>b;
	for(int i = 0 ; i < a.length(); i++)
	{
		if(a[i] == b[i])
			continue;
		else if(a[i] == b[i] + 'a' - 'A' || a[i] + 'a' - 'A' == b[i])
			continue;
		else
		{
			char ac,bc;

			if(a[i] >= 'a')
				ac = a[i] - 'a' + 'A';
			else
				ac = a[i];

			if(b[i] >= 'a')
				bc = b[i] - 'a' + 'A';
			else
				bc = b[i];

			if(ac < bc){
				cout<<"-1\n";
				return;
			}
			else if(bc < ac){
				cout<<"1\n";
				return;
			}
		}
	}
	cout<<"0\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
#include <bits/stdc++.h>
using namespace std;

void solve(){
	string a,b;
	cin>>a>>b;
	int n = a.length();
	if(a.length() == b.length()){
		bool flag = true;
		for(int i = 0; i < n; i++)
		{
			if(a[i] != b[n-1-i]){
				flag = false;
				break;
			}
		}
		if(flag)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	else
	{
		cout<<"NO\n";
	}

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
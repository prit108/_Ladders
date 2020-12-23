#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	string str;
	cin>>str;
	int ans = 0;
	int curr_len = 1;
	char curr = str[0];
	for(int i = 1; i < n; i++)
	{
		if(str[i] == curr)
			curr_len++;
		else
		{
			ans+=curr_len-1;
			curr_len = 1;
			curr = str[i];
		}
	}
	ans+=curr_len-1;
	cout<<ans<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
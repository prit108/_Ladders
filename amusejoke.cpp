#include <bits/stdc++.h>
using namespace std;

void solve(){
	string a,b,c;
	cin>>a>>b>>c;
	int og[26] = {0}, dis[26] = {0};
	for(char x : a)
	{
		og[(int)(x - 'A')]++;
	}
	for(char x : b)
	{
		og[(int)(x - 'A')]++;
	}
	for(char x : c)
	{
		dis[(int)(x - 'A')]++;
	}
	for(int i = 0; i < 26; i++)
	{
		if(dis[i] != og[i])
		{
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
	return;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
#include <bits/stdc++.h>
using namespace std;

void solve(){
	string str;
	cin>>str;
	int seen[26]={0};
	int cnt = 0;
	for(int i = 0; i < str.length(); i++)
	{
		if(seen[(int)(str[i]-'a')] == 0)
		{
			cnt++;
			seen[(int)(str[i]-'a')] = 1;
		}
	}
	if(cnt%2)
		cout<<"IGNORE HIM!\n";
	else
		cout<<"CHAT WITH HER!\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
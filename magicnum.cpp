#include <bits/stdc++.h>
using namespace std;

void solve(){
	string str;
	cin>>str;
	bool flag = true;
	for(int i = 0; i < str.length(); i++)
	{
		if(str[i] == '1' && str[i+1] == '4' && str[i+2] == '4')
		{
			i+=2;
		}
		else if(str[i] == '1' && str[i+1] == '4')
		{
			i+=1;
		}
		else if(str[i] == '1')
		{
			continue;
		}
		else
		{
			flag = false;
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
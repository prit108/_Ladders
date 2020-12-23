#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int x = 0;
	for(int i = 0; i < n; i++)
	{
		string str;
		cin>>str;
		if((str[0] == '+' || str[2] == '+') && (str[1] == '+'))
		{
			x++;
		}
		else if((str[0] == '-' || str[2] == '-') && (str[1] == '-'))
		{
			x--;
		}
	}
	cout<<x<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
#include <bits/stdc++.h>
using namespace std;
///while printf-ing long long numbers, using %l64d rather than %lld
#define ll long long
void solve(){
	string num;
	cin>>num;
	ll int n = 0;
	for(char c : num)
	{
		if(c == '4' || c == '7')
			n++;
	}
	int flag = (n==0)?0:1;
	while(n)
	{
		int k = n%10;
		n = n/10;
		if(k != 4 && k != 7){
			flag = 0;
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
#include <bits/stdc++.h>
using namespace std;
int isPrime(int n)
{
	int flag = 1;
	for(int i = 2; i <= (int)sqrt(n); i++)
	{
		if(n%i == 0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}

void solve(){
	int n,m;
	cin>>n>>m;
	int flag = 0;
	for(int i = n+1; i < m; i++)
	{
		if(isPrime(i))
		{
			flag = 1;
			break;
		}
	}
	if(flag)
		cout<<"NO\n";
	else if(isPrime(m))
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
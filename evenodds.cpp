#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
void solve(){
	ll n,k;
	cin>>n>>k;
	if(k <= (ll)ceil(n/2.00))
	{
		cout<<2*k-1;
	}
	else
	{
		k-=(ll)ceil(n/2.00);
		cout<<2*k;
	}
	cout<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
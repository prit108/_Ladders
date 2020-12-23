#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
void solve(){
	ll n,m;
	cin>>n>>m;
	ll a[m];
	for(ll i = 0; i < m; i++)
		cin>>a[i];
	ll time = 0;
	ll curr = 1;
	for(ll i = 0; i < m; i++)
	{
		if(a[i] > curr)
		{
			time+=a[i]-curr;
			curr = a[i];
		}
		else if(a[i] < curr)
		{
			time += n-a[i-1]+a[i];
			curr = a[i];
		}
	}
	cout<<time<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
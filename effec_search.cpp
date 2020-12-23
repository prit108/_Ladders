#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll bin_search(ll a[], ll key, ll lo, ll hi)
{
	if(lo > hi)
		return -1;
	else
	{
		ll mid = (lo + hi)/2;
		if(a[mid] < key)
			return bin_search(a, key, mid+1, hi);
		else if(key < a[mid])
			return bin_search(a, key, lo, mid-1);
		else
			return mid;
	}
}

void solve(){
	ll n;
	cin>>n;
	ll a[n];
	for(ll i = 0; i < n; i++)
		cin>>a[i];
	ll m;
	cin>>m;
	ll q[m];
	ll noofq[n+1] = {0};
	for(ll i = 0; i < m; i++){
		cin>>q[i];
		noofq[q[i]]++;
	}

	sort(q,q+m);
	ll vas = 0, pet = 0;
	for(ll i = 0; i < n; i++)
	{
		ll p = bin_search(q, a[i], 0, m-1);
		if(p != -1)
		{
			vas += (i+1)*noofq[a[i]];
			pet += (n-i)*noofq[a[i]];
		}
	}
	cout<<vas<<" "<<pet<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
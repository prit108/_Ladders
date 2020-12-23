#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int l[n], r[n];
	int lz = 0, lo = 0, rz = 0, ro = 0;
	for(int i = 0; i < n; i++)
	{
		cin>>l[i]>>r[i];
		if(l[i])
			lo++;
		else
			lz++;
		if(r[i])
			ro++;
		else
			rz++;
	}
	cout<<min(lo,lz)+min(ro,rz)<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
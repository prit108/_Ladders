#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int a[n];
	int fc = 0, zc = 0;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin>>x;
		if(x == 5)
			fc++;
		if(x == 0)
			zc++;
	}
	fc/=9;
	if(zc == 0)
	{
		cout<<-1;
	}
	else
	{
		for(int i = 0; i < fc; i++)
		{
			cout<<555555555;
		}
		if(fc >= 1){
		for(int i = 0; i < zc; i++)
		{
			cout<<0;
		}
		}
		else
			cout<<0;
	}
	cout<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
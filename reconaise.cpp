#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int a[n+1];
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	int fi=n-1, se=0;
	int diff = abs(a[n-1] - a[0]);
	for(int i = 0; i < n-1; i++)
	{
		if(diff > abs(a[i+1]-a[i]))
		{
			diff = abs(a[i+1]-a[i]);
			fi = i; 
			se = i+1;
		}
	}
	cout<<fi+1<<" "<<se+1<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
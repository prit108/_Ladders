#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int x_sum=0, y_sum=0, z_sum=0;
	for(int i = 0; i < n; i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		x_sum+=x;
		y_sum+=y;
		z_sum+=z;
	}
	if(x_sum == 0 && y_sum == 0 && z_sum == 0)
		cout<<"YES";
	else
		cout<<"NO";
	cout<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int mx, mn, amz=0;
	for(int i = 0; i < n; i++)
	{
		int a; cin>>a;
		if(i == 0)
		{
			mx = a;
			mn = a;
		}
		else
		{
			if(a>mx)
			{
				mx = a;
				amz++;
			}
			if(a<mn)
			{
				mn = a;
				amz++;
			}
		}
	}
	cout<<amz<<endl;

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
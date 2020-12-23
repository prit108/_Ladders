#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,t;
	cin>>n>>t;
	string str;
	cin>>str;
	for(int i = 0; i < t; i++)
	{
		for(int j = 0; j < n-1; j++)
		{
			if(str[j+1] == 'G' && str[j] == 'B'){
				str[j] = 'G';
				str[j+1] = 'B';
				j++;
			}

		}
	}
	cout<<str<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
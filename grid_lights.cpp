#include <bits/stdc++.h>
using namespace std;

void solve(){
	int light[3][3];
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cin>>light[i][j];
		}
	}
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			int numpress = light[i][j];
			if(i > 0)
				numpress += light[i-1][j];
			if(i < 2)
				numpress += light[i+1][j];
			if(j > 0)
				numpress += light[i][j-1];
			if(j < 2)
				numpress += light[i][j+1];
			
			if(numpress%2)
				cout<<0;
			else
				cout<<1;
		}
		cout<<"\n";
	}

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
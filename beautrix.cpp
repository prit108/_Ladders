#include <bits/stdc++.h>
using namespace std;

void solve(){
	int a;
	for(int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin>>a;
			if(a == 1)
			{
				cout<<(abs(j-2) + abs(i-2))<<"\n";
			}
		}
	}

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
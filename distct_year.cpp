#include <bits/stdc++.h>
using namespace std;
bool check_dis(int x)
{
	int a = x/1000;
	x%=1000;
	int b = x/100;
	if(a == b)
		return false;
	else
	{
		x%=100;
		int c = x/10;
		if(c == a || c == b)
			return false;
		else
		{
			x%=10;
			if(x == a || x == b || x == c)
				return false;
			else return true;
		}
	}
}

void solve(){
	int y;
	cin>>y;
	for(int i = y+1; i < 10000; i++)
	{
		if(check_dis(i)){
			cout<<i<<endl;
			break;
		}
	}

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
#include <bits/stdc++.h>
using namespace std;
#define _pb push_back
#define _mp make_pair
#define _f first
#define _s second
void solve(){
	int n;
	cin>>n;
	vector<pair<int,int>> pts;
	for(int i = 0; i < n; i++)
	{
		int a,b;
		cin>>a>>b;
		pts._pb(_mp(a,b));
	}
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		int x0 = pts[i]._f, y0 = pts[i]._s;
		bool lo=false, hi=false, ri=false, le=false;
		for(int j = 0; j < n; j++)
		{
			int x = pts[j]._f, y = pts[j]._s;
			if(x == x0 && y < y0)
				lo = true;
			else if(x == x0 && y > y0)
				hi = true;
			else if(x < x0 && y == y0)
				le = true;
			else if(x > x0 && y == y0)
				ri = true;
		}
		if(lo && hi && ri && le)
			count++;
	}
	cout<<count<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
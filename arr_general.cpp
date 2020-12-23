#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int a[n];
	int max_index = 0;
	int max = 0;
	int min_index = 0;
	int min = 105;
	for(int i = 0; i < n; i++)
		cin>>a[i];
	for(int i = 0; i < n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
			max_index = i;
		}
		if(a[i] <= min)
		{
			min = a[i];
			min_index = i;
		}
	}
	if(max_index > min_index)
	{
		cout<<n-1-min_index+max_index-1;
	}
	else if(max_index < min_index)
	{
		cout<<n-1-min_index+max_index;
	}

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
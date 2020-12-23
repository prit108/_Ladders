#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	long long int a[n];
	long long int x = 1e9 + 5;
	int index = -1;
	for(int i = 0; i < n; i++){
		cin>>a[i];
		if(a[i] < x)
		{
			x = a[i];
			index = i;
		}
	}
	int c = 0;
	for(int i = 0; i < n; i++){
		if(a[i] == x)
			c++;
	}

	if(c == 1)
	{
		cout<<index+1;
	}
	else
	{
		cout<<"Still Rozdil";
	}
	cout<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
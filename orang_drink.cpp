#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int a[n];
	int sum = 0;
	for(int i = 0; i < n; i++){
		cin>>a[i];
		sum += a[i];
	}
	double x = sum*1.00/n;
	cout<<setprecision(10)<<x;


}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
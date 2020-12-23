#include <bits/stdc++.h>
using namespace std;

int lcm ( int a, int b)
{
	return (a*b)/__gcd(a,b);
}

void solve(){
	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	//the brute is easy to get iterate over 1 to d and check divisibility
	int x = d/k + d/l + d/m + d/n - (d/lcm(k,l) + d/lcm(l,m) + d/lcm(m,n) + d/lcm(k,n) + d/lcm(k,m) + d/lcm(l,n)) + (d/lcm(k,lcm(m,n)) + d/lcm(l,lcm(m,n)) + d/lcm(l,lcm(k,n)) + d/lcm(l,lcm(k,m))) - d/lcm(lcm(k,l),lcm(m,n));
	cout<<x;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
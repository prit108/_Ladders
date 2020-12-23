#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int limes = c*d;
	int salt = p/np;
	int drink = (k*l)/nl;
	cout<<min(drink,min(salt,limes))/n<<endl;

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
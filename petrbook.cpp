#include <bits/stdc++.h>
using namespace std;

void solve(){
	int pg;
	cin>>pg;
	int read[7];
	int full = 0;
	for(int i = 0; i < 7; i++){
		cin>>read[i];
		full += read[i];
	}
	pg%=full;
	int day = 1;
	if(pg == 0)
		pg = full;
	for(int i = 0; i < 7; i++)
	{
		pg-=read[i];
		if(pg <= 0){
			day = i+1;
			break;
		}
	}
	cout<<day<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
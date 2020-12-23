#include <bits/stdc++.h>
using namespace std;
#define _pb push_back
void solve(){
	string str;
	cin>>str;
	vector<int> nums;
	for(int i = 0; i < str.length(); i++)
	{
		if(str[i] != '+')
			nums._pb((int)(str[i]-'0'));
	}
	sort(nums.begin(), nums.end());
	for(int i = 0; i < nums.size()-1; i++)
	{
		cout<<nums[i]<<"+";
	}
	cout<<nums[nums.size()-1];
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
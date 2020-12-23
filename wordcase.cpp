#include <bits/stdc++.h>
using namespace std;

void solve(){
	string word;
	cin>>word;
	int diff = 0;
	for(char c : word){
		if(c >= 'A' && c <= 'Z')
			diff++;
		else if(c >= 'a' && c <= 'z')
			diff--;
	}
	for(char c : word){
		if(diff <= 0)
		{
			if(c >= 'A' && c <= 'Z')
				cout<<(char)(c-'A'+'a');
			else
				cout<<c;
		}
		else
		{
			if(c >= 'a' && c <= 'z')
				cout<<(char)(c-'a'+'A');
			else
				cout<<c;
		}
	}
}

void solve2(){
	string word;
	cin>>word;
	if(word[0] >= 'a' && word[0] <= 'z')
		word[0] = word[0] - 'a' + 'A';
	cout<<word<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve2();
}
#include <bits/stdc++.h>
using namespace std;
bool compareWord(string a, string b)
{
	if(a.length() == b.length())
	{
		for(int i = 0; i < a.length(); i++)
		{
			if(a[i] != b[i])
				return false;
		}
		return true;
	}
	else
		return false;
}

void solve(){
	int n;
	cin>>n;
	string s1,s2,a;
	int o=0,t=0;
	bool flag = false;
	for(int i = 0; i < n; i++)
	{
		//cout<<"hi\n";
		cin>>a;
		if(i == 0)
		{
			s1 = a;
			o++;
		}
		else
		{
			if(compareWord(s1,a))
			{
				o++;
			}
			else if(!flag)
			{
				flag = true;
				s2 = a;
				t++;
			}
			else if(compareWord(s2,a))
			{
				t++;
			}
		}
	}
	if(o > t)
		cout<<s1;
	else
		cout<<s2;

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}
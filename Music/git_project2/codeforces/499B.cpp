#include<map>
#include<cmath>
#include<iostream>
using namespace std;
map<string,string> dict;
int main()
{
	int N,M,i;
	string key,val;
	cin>>N>>M;
	while(M--)
	{
		cin>>key>>val;
		dict[key] = val;
	}
	while(N--)
	{
		cin>>val;
		if(dict[val].length() < val.length())
			cout<<dict[val]<<" ";
		else
			cout<<val<<" ";
	}
	return 0;
}

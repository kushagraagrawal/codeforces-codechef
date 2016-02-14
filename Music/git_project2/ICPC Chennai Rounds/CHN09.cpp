#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	int i;
	string s;
	while(T--)
	{
		int b[2] = {0};
		cin>>s;
		for(i=0;i<s.length();i++)
		{
			b[s[i] - 'a']++;
		}
		cout<<min(b[0],b[1])<<endl;
	
	}
	return 0;
}

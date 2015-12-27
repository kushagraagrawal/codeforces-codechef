#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	stack <char> st;
	int M = 4;
	char O[4] = {'<','{','[','('};
	char C[4] = {'>','}',']',')'};
	long long int i,j,n = s.length(),count=0;
	for(i=0;i<n;i++)
	{
		bool c = false;
		for(j=0;j<M;j++)
		{
			if(O[j]==s[i])
			{
				c= true;
				break;
			}
		}
		if(c)
		{
		st.push(s[i]);
		continue;
		}
		if(st.empty())
		{
			cout<<"Impossible";
			return 0;
		}
		int oi,ci;
		for(j = 0;j<M;j++)
		{
			if (O[j]==st.top())
			{
				oi = j;
				break;
			}
		}
		for(j=0;j<M;j++){
			if(C[j]==s[i])
			{
				ci = j;
				break;
			}
		}
		if(oi!=ci)
		count++;
		st.pop();
	
	}
	if(!st.empty())
	cout<<"Impossible";
	else
	cout<<count;
	return 0;
}

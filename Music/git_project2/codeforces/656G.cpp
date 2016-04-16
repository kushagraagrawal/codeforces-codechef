#include <iostream>
#include <string>

using namespace std;
int a[11];
//kitten
int main()
{
	int F, I, T;
	cin >> F >> I >> T;
	for (int i = 0; i < F; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < I; j++)
		{
			if (s[j] == 'Y')
				a[j]++;
		}
	}	
	int ans = 0;
	for (int i = 0; i < I; i++)
		if (a[i] >= T)
			ans++;
	cout << ans;	
	return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
//kitten
int main()
{
	int F,I,T;
	//cin>>F>>I>>T;
	cin>> F >> I >> T;
	string s;
	int count = 0;
	int L[11] = {0};
	while(F--)
	{
		cin>> s;
		for(int i=0;i<I;i++)
		{
			if(s[i]=='Y')
			++L[i];
		}
			
	}
	for(int j=0;j<I;j++)
		{
			if(L[j]>=T)
			count++;
			//cout<<count<<endl;
		}
cout<< count;
return 0;
}*/

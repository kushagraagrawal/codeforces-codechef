#include<bits/stdc++.h>
#include<string>
#include<ctype.h>
using namespace std;
int main(){
	long long int n,i,count=0;
	int b[26] = {0},c[26] = {0};
	string s;
	cin>>n;
	cin>>s;
	b[s[0] - 'a']++;
	for (i=1;i<s.size();i++)
	{
		
		if(i%2==0)
		b[s[i] - 'a']++;
		else
		{
		if (b[tolower(s[i]) - 'a']>0)
		b[tolower(s[i]) - 'a']--;
		else
		count++;
		
		}
		//cout<<count<<endl; 
		//cout<<count<<endl;	
		}
		
/*for(i=0;i<26;i++)
	{
		if (b[i] - c[i] >0 && c[i] > 0)
		count += b[i] - c[i];
		//cout<<count<<endl;
	}
	*/
cout<<count<<endl;
return 0;
}

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	long long int n,k,i,sum=0;
	long long int b[26] = {0};
	cin>>n>>k;
	string s;
	cin>>s;
	for (i=0;i<n;i++)
	{
		b[s[i] - 'A']++;
	}
	sort(b,b+26);
	/*for (i=0;i<26;i++)
	cout<<b[i]<<" ";*/
	for(i=25;i>=0;i--)
	{
		//cout<<b[i] <<endl;
		if (k - b[i] > 0)
		{	
			sum += (b[i]) * (b[i]);
			//cout<<sum<<endl;
			k -= b[i];
		}
		else
		{
			sum+= k*k;
			break;
		}
	}
cout<<sum<<endl;
	return 0;
}

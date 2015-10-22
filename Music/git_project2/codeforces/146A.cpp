#include<bits/stdc++.h>
using namespace std;
int main()
{
	int b[10] = {0},flag1 = 1;
	int n,sum1=0,sum2=0;
	cin>>n;
	string s;
	cin>>s;
	for (int i=0;i<s.size();i++)
	{
		b[s[i] - '0']++;
		if(i < n/2)
		sum1 += s[i];
		else
		sum2 +=s[i];
	}
	for (int j=0;j<10;j++)
	{
		if (b[j] > 0 && j!= 4 && j!= 7)
		{
			//cout<<j;
			flag1=0;
			break;
		}
	}
	/*cout<<flag1<<endl;
	cout<<sum1<<" "<<sum2<<endl;*/
	if (flag1==1 && (sum1==sum2))
	cout<<"YES"<<endl;
	else
	cout<<"NO";
	return 0;
}

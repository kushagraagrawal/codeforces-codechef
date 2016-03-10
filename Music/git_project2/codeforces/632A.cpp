#include <bits/stdc++.h>
using namespace std;
string str[1004];
long long n,p;
int main()
{

    cin>>n>>p;
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    long long sum=0,ans=0;
    for(int i=n-1;i>=0;i--)
    {
        if(str[i]=="halfplus")
        {
            sum+=1;
            ans+=sum*p;
            sum*=2;

        }
        else
        {
            ans+=sum*p;
            sum*=2;
        }
    }
    cout<<ans/2<<endl;
    return 0;
}
/*#include<bits/stdc++.h>
#define LL long long int
using namespace std;
int main()
{
	float n,p,temp;
	string s;
	LL cost = 0,sum=0;
	cin>>n>>p;
	temp =n;
	
	while(temp--)
	{
		cin>>s;
		if(s=="half")
		{
			cost += sum*p;
			sum*=2;	
		}	
		else if(s=="halfplus" )
		{
			sum+=1;
			cost+=sum*p;
			sum*=2;
		}
	}	
	cout<<cost/2<<endl;
	return 0;
}*/

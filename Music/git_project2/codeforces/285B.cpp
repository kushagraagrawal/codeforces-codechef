/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,s,t,a[100000],i,count=0,flag=1,temp,pos;
	cin>>n>>s>>t;
	for(i=0;i<n;i++)
	cin>>a[i];
	temp = a[s-1];
	pos = s - 1;
	while(flag)
	{
		
		cout<<pos<<endl;
		if(pos == t-1)
		{
			flag=0;
			break;
		}	
		
		temp = a[pos];
		pos = temp - 1;
		count++;
	}
	cout<<count<<endl;
	return 0;
}*/
#include <cstdio>

int main()
{
    int n, s, t, p[100000+1];
    scanf("%d%d%d", &n, &s, &t);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &p[i]);
    }
    int step = 0;
    while (s != t && p[s] != 0)
    {
        int temp = p[s];
        p[s] = 0;
        s = temp;
        step += 1;
    }
    printf("%d\n", s == t ? step : -1);
    return 0;
}

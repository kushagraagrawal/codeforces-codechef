#include<bits/stdc++.h>
#define LL long long int 
using namespace std;
LL power(LL base,LL power){
	LL result = 1;
    while (power > 0)
    {
    	if (power%2 == 1)
    	{
    		result=(result*base);
    	}
    	base = (base*base);
    	power/=2;
    }
	return result;
}
int main()
{
	LL rs,n,temp,lm,temp2;
	
	cin>>n;
	temp = (2*n) - 2;
	lm = temp - n+1;
	rs = 0;
	for(int i=1;i<=lm;i++)
	{
		if(i==1 || i==lm)
		{
			temp2 = 4*3*power(4,temp-n-1);
		}
		else
		temp2 = 4*3*3*power(4,temp-n-2);
		rs += temp2; 
	}
	cout<<rs;
	return 0;
}

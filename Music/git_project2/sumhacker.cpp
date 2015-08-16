#include<iostream>
using namespace std;
int main()
{
	long long int t,l,r,l1,r1,i;
	cin>>t;
	//1414214
	while(t--)
{
	cin>>l>>r;
	int found=0;
	for(i=1;i<=1414214&& !found;i++)
	{
		if((l>=1+i*(i-1)/2)&&(l<=i*(i+1)/2))
	    
	    {
	    l1=i; 
	    found=1;
	    }
	
	    
	}
	found=0;
	for(i=1;i<=1414214&& !found;i++)
	{
	    if((r>=1+i*(i-1)/2)&&(r<=i*(i+1)/2))
	    {
	    r1=i;
        found=1;
       }
	}
	long long int sum=0,pos,left;
	pos=l-(l1*(l1-1)/2);
	left=l1-pos+1;
	if(l1%2!=0)
     {
     
	  if(left%2!=0)	
	  sum+=l1;
		}
		else
		{
			if(left%2!=0)
			sum-=l1;
		}
		
		pos=r-(r1*(r1-1)/2);
	left=pos;
	if(r1%2!=0)
     {
     
	  if(left%2!=0)	
	  sum+=r1;
		}
		else
		{
			if(left%2!=0)
			sum+=r1;
		}
		for(i=l1+1;i<=r1-1;i++)
		{
		  if(i%2!=0)
		  sum+=i;	
		}
   		cout<<sum;
}
  return 0;	
}

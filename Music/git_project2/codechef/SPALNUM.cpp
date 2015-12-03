#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(long int);
int main()
{
	int T;
	long int L,R,i,sum;
	cin>>T;
	while(T--)
	{
		sum = 0;
		cin>>L>>R;
		for(i=L;i<=R;i++)
		{
			if(checkPalindrome(i))
			sum+=i;
		}
	cout<<sum<<endl;	
	}

return 0;
}

bool checkPalindrome(long int i)
{
	long int n = i;
	long int dig,rev = 0;
	while (i>0){
		dig = i%10;
		rev = rev * 10 + dig;
		i /= 10;
	}
	return (n==rev);
}

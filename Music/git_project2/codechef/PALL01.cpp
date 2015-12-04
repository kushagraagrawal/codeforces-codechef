#include<bits/stdc++.h>

using namespace std;
bool checkPalindrome(int i)
{
     int n = i;
	int dig,rev = 0;
	while (i>0){
		dig = i%10;
		rev = rev * 10 + dig;
		i /= 10;
	}
	return (n==rev);
}
int main()
{
	int T,N;
	cin>>T;
	while(T--)
	{
		cin>>N;
		if(checkPalindrome(N))
		cout<<"wins"<<endl;
		else
		cout<<"losses"<<endl;
	}
return 0;
}

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{ 
	int t, a, b, count;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d", &a, &b);
		count = 0;
		while(b % a != 0)
		{
			a >>= 1;
			count++;
		}
		while(a != b)
		{
			a <<= 1;
			count++;
		}
		printf("%d\n", count);
	}
	return 0 ;
}
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	long long int A,B,steps = 0,temp1,temp2;
	cin>>T;
	while(T--)
	{
		steps = 0;
		cin>>A>>B;
		if (A==B)
		cout<<"0"<<endl;
		else
		{
			temp1 = A%2;
			temp2 = B%2;
			if(temp1 == temp2 && temp2==0)
			{
				if(A<B)
				cout<<(B-A)/2<<endl;
				else
				cout<<(A - B)/2<<endl;
			}
			else if(temp1==temp2 && temp2==1)
			{
				steps++;
				A = (A-1)/2;
				steps+= A/2;
				cout<<steps<<endl;
			}
			else
			{
				if (temp2 == 1)
				{
					
					cout<<A/2<<endl;
					
				
				}
				else if(temp2 == 0)
				{
					A = (A-1)/2;
					steps++;
					steps += A/2;
					cout<<steps<<endl;
				} 
			}
		}
	}
return 0;
}*/

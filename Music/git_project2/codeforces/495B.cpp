#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b,output = 0;
	cin>>a>>b;
	if (a==b)
	cout<<"infinity";
	else if(a<b)
	cout<<"0";
	else
	{
		long long int diff = a - b,div = 0;
		for(div = 1;div*div<diff;div++){
			if(diff%div ==0){
				if(div>b)
				output++;
				if((diff/div)> b)
				output++;
			}
		}
		if (div>b && div*div ==diff)
		++output;
		cout<<output;
	}
return 0;
}

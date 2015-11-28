#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int input,first=0, second=0,temp=0,newFib = 1;
	cin>>input;
	while (newFib<input)
	{
		first = second;
		temp = newFib;
		newFib += second;
		second = temp;
	}
	if(input == 1)
	second = 1;
	cout<<second - first<<" "<<first<<" "<<first;
	return 0;
}

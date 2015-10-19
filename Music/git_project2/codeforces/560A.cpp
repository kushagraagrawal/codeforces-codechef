#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,flag = 0;
	long int temp,i;
	cin>>n;
	while(n--){
		cin>>temp;
		if(temp==1)
		flag=1;
	}
	if (flag==1)
	cout<<"-1"<<endl;
	else
	cout<<"1"<<endl;
	return 0;
}

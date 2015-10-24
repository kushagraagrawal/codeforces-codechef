#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l1,l2,l3,b1,b2,b3;
	cin>>l1>>b1;
	cin>>l2>>b2;
	cin>>l3>>b3;
	
	int flag=0;
	
	if(l2+l3<=l1 && b2<=b1 && b3<=b1)
	flag=1;
	
	else if(l2+l3<=b1 && b2<=l1 && b3<=l1)
	flag=1;
	
	else if(l2+b3<=l1 && b2<=b1 && l3<=b1)
	flag=1;
	
	else if(l2+b3<=b1 && b2<=l1 && l3<=l1)
	flag=1;
	
	else if(b2+b3<=l1 && l2<=b1 && l3<=b1)
	flag=1;
	
	else if(b2+b3<=b1 && l2<=l1 && l3<=l1)
	flag=1;
	
	else if(b2+l3<=l1 && l2<=b1 && b3<=b1)
	flag=1;
	
	else if(b2+l3<=b1 && l2<=l1 && b3<=l1)
	flag=1;
	
	if(flag)
	cout<<"YES";
	else
	cout<<"NO";
	
	return 0;
}

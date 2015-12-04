#include <iostream>
using namespace std;
int gcd(int n1,int n2){
if(n1%n2==0)return n2;
return gcd(n2,n1%n2);
}
int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	int a,b,g;
	cin>>a>>b;
g = gcd(a,b);
	
	    cout<<g;
	    int c = (a*b)/g;
	    cout<<" ";
	    cout<<c<<endl;
	    
	}
	
	
	return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
long long int GCD(long long int M,long long int N)
{
	if(M%N==0) return N;
	return GCD(N,M%N); 
}
/*long long int LCM(long long int a,long long int b)
{
    long long int temp = GCD(a, b);

    return temp ? (a / temp * b) : 0;
}
int main()
{
	int T;
	long long int A,B,TEMP;
	cin>>T;
	while(T--)
	{
		cin>>A>>B;
		cout<<GCD(A,B)<<" ";
		TEMP = (A*B)/GCD(A,B);
		cout<<TEMP<<endl;
	}
return 0;
}*/

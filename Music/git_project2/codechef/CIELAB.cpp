#include<bits/stdc++.h>
using namespace std;
int main()
{
	int A,B;
	cin>>A>>B;
	A -= B;
	if(A%10 == 9)
	A--;
	else
	A++;
	cout<<A<<endl;
	return 0;
}

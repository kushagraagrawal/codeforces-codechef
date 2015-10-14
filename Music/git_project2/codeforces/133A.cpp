#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[101];
	int b[94] = {0};
	cin>>a;
	for (int i=0;i<strlen(a);i++)
	{
		b[a[i] - '!']++;
		//cout<<a[i] - '!'<<endl;
	}
	//cout<<b[39]<<" "<<b[48]<<" "<<b[24]<<" "<<b[10];
	if (b[39] > 0 || b[48] > 0 || b[24] >0)// || b[10] >0)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;


}

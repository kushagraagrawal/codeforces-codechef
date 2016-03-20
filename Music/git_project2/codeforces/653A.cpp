#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,i;
	cin>>N;
	int temp,flag = 0;
	int b[1001] = {0};
	for (i=0;i<N;i++)
	{
		cin>>temp;
		b[temp]++;
	
	}
	//sort(a.begin(),a.end());
	//int count=0;
	/*for (int i=1;i<N;i++)
	a[i] = a[i] - a[i-1];
*/
	for(i=1;i<=998;i++)
	{
		/*if((a[i+1] - a[i] <=2) && (a[i+2] - a[i] <=2))
		{
			if(a[i+1] - a[i] >0 && a[i+2] - a[i] >0 && a[i+2] - a[i+1] > 0){
			//cout<<a[i]<<" "<<a[i+1]<<" "<<a[i+2]<<endl;
			cout<<"YES"<<endl;
			return 0;
			}
		}
	*/
		if(b[i] && b[i+1] && b[i+2])
		{
			flag = 1;
			break;
		}
	}
	if(flag)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}

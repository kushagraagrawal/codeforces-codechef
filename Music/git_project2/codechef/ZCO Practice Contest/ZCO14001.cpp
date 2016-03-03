#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int j,i,N,H,temp=1,flag1=1;
	cin>>N>>H;
	vector<long long int>a(N);
	for(i=0;i<N;i++)
	cin>>a[i];
/*
	1 : Move left
    2 : Move right
    3 : Pick up box
    4 : Drop box
    0 : Quit
*/
	i=0;
	while(1)
	{
		cin>>temp;
		if(temp==0)
		break;
		else
		{
			if(temp==1 && i > 0)
			i--;
			else if(temp==2 && i<N-1)
			i++;
			else if(temp==3 && a[i] > 0 && flag1==1)
			{
				a[i]--;
				flag1 = 0;
			}
			else if(temp==4 && a[i] <H && flag1==0){
				a[i]++;
				flag1 = 1;
			}
		//	cout<<i<<endl;
		}
	}
	for(i=0;i<N;i++)
	cout<<a[i]<<" ";
	return 0;
}

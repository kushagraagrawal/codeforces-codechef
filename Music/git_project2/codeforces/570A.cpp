#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int N,M;
	long long int l,j,i,a[100],b[101] = {0},temp1=0,*temp2,temp3;
	cin>>N>>M;
	for(i=0;i<M;i++)
	{	temp1 = 0;
		for(j=0;j<N;j++)
		{
			cin>>a[j];
			
		/*	if (a[j]>=temp1)
			{
				temp1= a[j];
				temp3 = j;
			}*/
		}
		temp1 = *max_element(a, a + N);
		for (l=0;l<N;l++)
		{
			if (a[l] == temp1)
			{
			temp3 = l;
			break;
		}
		}
		/*temp1 = *max_element(a, a + N);
		temp2 = std::find (a, a+N, temp1);
		//cout<<*temp2<<endl;*/
		//cout<<temp1<<" "<<temp3<<endl;
		b[temp3 + 1]++;
	}
	temp1 = *max_element(b,b+101);
	for (i=0;i<101;i++)
	{	//cout<<b[i]<<endl;
		if(b[i] == temp1)
		{
			temp3 = i;
			break;
		}
	}
	cout<<temp3<<endl;
	return 0;
}

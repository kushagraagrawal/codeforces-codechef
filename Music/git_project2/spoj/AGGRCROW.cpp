#include<bits/stdc++.h>
using namespace std;
long long int N,C;
long long int stall[100000];
bool find(long long int mid)
{
	long int pre = stall[0],c=0,i;
	for(i=1;i<N;i++)
	{
		if(stall[i] - pre >= mid)
		{
			c++;
			pre = stall[i];		
		}
	}
	if(c>=C)
	return true;
	return false;
}

int main(){
	long long int T,i;
	cin>>T;
	while(T--)
	{
		cin>>N>>C;
		C--;
		//vector<long long int> stall(N);
		for(i=0;i<N;i++)
		{
			cin>>stall[i];
		}
		sort(stall,stall + N);
		long long int left = 0,right = stall[N-1],mid;
		while(left<=right)
		{
			mid = (left + right) / 2;
			if(find(mid)) left = mid + 1;
			else right = mid - 1;
		}
		cout<<left - 1<<endl;
	}
return 0;
}

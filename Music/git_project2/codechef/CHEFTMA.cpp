#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	long int N,K,M;
	cin>>T;
	while(T--)
	{
		long int i,j,k,temp1,temp2,sum=0;
		cin>>N>>K>>M;
		vector <long int>A(N),B(N),E(N),C(K),D(M);
		for(i=0;i<N;i++)
		{
			cin>>A[i];
		}
		for(i=0;i<N;i++)
		{
			cin>>B[i];
		}
		for(i=0;i<N;i++)
		{
			E[i] = A[i] - B[i];
		}
		for(i=0;i<K;i++)
		cin>>C[i];
		for(i=0;i<M;i++)
		cin>>D[i];
		sort(E.begin(),E.end());
		sort(C.begin(),C.end());
		sort(D.begin(),D.end());
		j = K-1;k=M-1;
		for(i=N-1;i>=0;i--)
		{
			if(E[i]==0)
			continue;
			else
			{
				temp1 = E[i];
				temp2 = E[i];
				for (j = K-1;j>=0;j--)
				{
					temp1 = E[i] - D[j];
					if (temp1 >= 0)
					{
					//cout<<D[j];
					//D[j] = 100001;
					break;
					}
				}	
				//cout<<endl;
				for (k= M-1;k>=0;k--)
				{
					temp2 = E[i] - C[k];
					if(temp2 >=0)
					{
						//cout<<C[k]<<" ";
				//		C[k] = 100001;
						break;	
					}
				}
				//cout<<temp1<<" "<<temp2;
				if(temp1>=0 && temp2 >=0)
				{
				
				E[i] = min(temp1,temp2);
				if (temp1 <= temp2)
				{
					D[j] = 100001;
					
				}
				else
				C[k] = 100001;
				}
				else if(temp1>=0)
				{
				E[i] = temp1;
				D[j] = 100001;
				}
				else if(temp2>=0)
				{
			
				E[i] = temp2;
				C[k] = 100001;
				}
				//cout<<E[i]<<endl;
			}
		}
		for(i=0;i<N;i++)
		sum+=E[i];
		cout<<sum<<endl;
	}
return 0;
}

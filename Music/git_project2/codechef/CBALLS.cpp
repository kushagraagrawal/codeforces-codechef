// samala's code
#include<cmath>
#include<vector>
#include<climits>
#include<iostream>
using namespace std;
 
long gcd(long a, long b)
{
	if(b == 0)
		return a;
	return gcd(b,a%b);
}
 
int main()
{
	int T;
	vector<long> V(10001);
	cin>>T;
	while(T--)
	{
		long N,i,j,l,odd=0,hcf,min_balls=0,min_hcf=LONG_MAX;
		long vect_hcf(0);
		cin>>N>>V[0];
		hcf = V[0];
		for(i=1;i<N;++i)
		{
			scanf(" %ld",&V[i]);
			if(V[i] < V[i-1])
			{
				min_balls += V[i-1] - V[i];
				V[i] = V[i-1];
			}
			hcf = gcd(V[i],hcf);
		}
 
		if(hcf == 1)
		{
			l = V[0]>1?V[0]:100;
 
			for(j=2;j<=l;++j)
			{
				vect_hcf = 0;
				for(i=N-1;i>=0;--i)
					vect_hcf += (j - V[i]%j)%j;
 
				if(min_hcf > vect_hcf && vect_hcf>0)
					min_hcf = vect_hcf;
				//cout<<j<<" - "<<min_balls<<","<<vect_hcf[j]<<endl;
			}
			//cout<<endl;
			min_balls += min_hcf;
		}
 
		cout<<min_balls<<endl;
	}
	return 0;
}
/*
#include<vector>
#include<iostream>
using namespace std;
 
long make_non_decreasing(vector<long> &A)
{
	long l=A.size(),i,count=0;
	for(i=1;i<l;++i)
	{
		if(A[i] < A[i-1])
		{
			count += A[i-1] - A[i];
			A[i] = A[i-1];
		}
	}
	return count;
}
 
long gcd(long a, long b)
{
	if(a == b || b == 0)
		return a;
	long x=max(a,b),y=min(a,b);
 
	return gcd(y,x%y);
}
 
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long N,i,odd=0,hcf,min_balls=0;
		cin>>N;
		vector<long> V(N);
		for(i=0;i<N;++i)
			cin>>V[i];
		min_balls = make_non_decreasing(V);
 
		hcf = V[0];
		for(i=0;i<N;++i)
		{
			if(V[i]%2)
				odd++;
			hcf = gcd(hcf,V[i]);
		}
		if(hcf == 1)
			min_balls += odd;
		cout<<min_balls<<endl;
	}
	return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
bool RelativelyPrime(long int a,long int b)
{
	return (a<b) ? RelativelyPrime(b,a) : !(a%b) ? (b==1) : RelativelyPrime (b, a%b);
}

int main()
{
	int T,N,i;
	cin>>T;
	while(T--)
	{
		cin>>N;
		long int count = 0;
		vector <long int> a(N),b(N);
		bool c[N];
		cin>>a[0];
		//b[0] = a[0];
		c[0] = false;
		for(i=1;i<N;i++)
		{
			cin>>a[i];

			//b[i] = a[i] - a[i-1];
			//c[i] = RelativelyPrime(a[i],a[i-1]);
			if(a[i] - a[i-1] <0)
			{count += a[i-1] - a[i];
			a[i] = a[i-1] ;
			}
			c[i] = RelativelyPrime(a[i],a[i-1]);
		}
		/*for(i=0;i<N;i++)
		cout<<a[i]<<" ";
		for(i=0;i<N;i++)
		cout<<c[i]<<" ";
		for(i=1;i<N;i++)
		{
			if(a[i] - a[i-1] <= 0)
			{
				count += a[i-1] - a[i];
				a[i] = a[i-1] ;
			}
			if(c[i]==1)
			{
				while(c[i]!=0 && a[i] > a[i-1])
				{
					a[i] ++;
					count++;
					if(RelativelyPrime(a[i],a[i-1])==0)
					{
						c[i] = false;
					break;
					}
					else
					{
						a[i-1]++;
						count++;
						c[i] =RelativelyPrime(a[i],a[i-1]);
					}
				}	
			}
		}
	/*	for(i=0;i<N;i++)
		cout<<a[i]<<" ";
		cout<<count<<endl;
	}
return 0;
}*/

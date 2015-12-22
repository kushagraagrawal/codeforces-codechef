#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,l,r;
	long long int sall,sk,kMean,kMod,p;
	cin>>n>>k>>l>>r>>sall>>sk;
/*	temp = s2 / r;
	s1 -= (temp*k);*/
	kMean = sk / k;
	kMod = sk % k;
	for(p=0;p<kMod;p++)
	cout<<kMean + 1<<" ";
	for(p = kMod;p<k;p++)
	cout<<kMean<<" ";
	if(k<n){
		long restMean = (sall - sk) / (n-k);
		long restMod = (sall - sk) % (n-k);
		for(p=0;p<restMod;p++)
		cout<<restMean + 1<<" ";
		for(p=restMod;p<n-k;p++)
		cout<<restMean<<" ";
	}	
	cout<<endl;
	return 0;
}

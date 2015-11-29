#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i;
	long long int left[100000],right[100000],pos = -2;
	vector<pair<long long int,long long int> > segments;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>left[i]>>right[i];
		segments.push_back(std::pair<long long int,long long int>(left[i],right[i]));
	}
	sort(left,left + n);
	sort(right,right + n);
	pair<long long int,long long int> target (left[0] , right[n - 1]);
	for(i=0;i<n;i++)
	{
		if(segments[i]==target)
		{
			pos = i;
			break;
		}
	}
	cout<<pos + 1<<endl;
	return 0;
}

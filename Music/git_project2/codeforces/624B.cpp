#include<bits/stdc++.h>
using namespace std;
/*struct greater
{
    template<class T>
    bool operator()(T const &a, T const &b) const { return a > b; }
};
*/
//std::sort(numbers.begin(), numbers.end(), greater());
int main()
{
	int n,i;
	cin>>n;
	
	vector<long long int> a(n);
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	std::sort(a.begin(),a.end());
	long long int length = 0,s;
	length += a[n-1];
	s = length;
	s--;
	for(i=n-2;i>=0;i--)
	{
		if(s==0)
		break;
		if(a[i]>=s)
		{
		
			length += s;
			s--;
		}
		else
		{
			length += a[i];
			s = a[i] - 1;
		}
	
	}
	cout<<length<<endl;
}

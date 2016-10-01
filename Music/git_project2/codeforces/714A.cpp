#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long a[5],ans=0;
	cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
	if((a[1]-a[2])>=0&&(a[3]-a[0])>=0){
		sort(a,a+4);
		if(a[1]<=a[4]&&a[4]<=a[2])
			ans=a[2]-a[1];
		else
			ans=a[2]-a[1]+1;
	}
	cout<<ans<<endl;
	return 0;
}

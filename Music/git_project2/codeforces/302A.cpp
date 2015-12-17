/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,n,m,temp1,temp2;
	cin>>n>>m;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	while (m--)
	{
		long int sum = 0;
		cin>>temp1>>temp2;
		for(i=temp1-1;i<temp2;i++)
		sum+=a[i];
		if (sum == 0)
		cout<<"1"<<endl;
		else
		cout<<"0"<<endl;
	}
return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,minus=0,plus=0,temp=0;
	cin>>n>>m;
	for (int k=0;k<n;k++)
	{
		cin>>temp;
		(temp>0) ? (++plus):(++minus);
	}
	int left = 0,right = 0,half = 0;
	while(m--)
	{
		cin>>left>>right;
		half = (right - left + 1)/2;
		((right - left)%2 && plus >=half && minus >=half) ? cout<<"1"<<endl : cout<< "0"<<endl ;
	}
	return 0;
	}
*/
#include <cstdio>

int main(){

    int n, m; scanf("%d %d", &n, &m);
    int minus(0), plus(0), temp(0);
    for(int k = 0; k < n; k++){
        scanf("%d",&temp);
        (temp > 0) ? (++plus) : (++minus);
    }

    int left(0), right(0), half(0);
    while(m--){
        scanf("%d %d", &left, &right);
        half = (right - left + 1) / 2;
        ((right - left)%2 && plus >= half && minus >= half) ? puts("1"): puts("0");
    }
    return 0;
}

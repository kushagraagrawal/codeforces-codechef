#include <cstdio>
#include <vector>

int main(){

    long p, n; scanf("%ld %ld\n", &p, &n);
    std::vector<bool> taken(p, 0);

    long output(-1);

    for(int k = 1; k <= n; k++){
        long temp; scanf("%ld\n", &temp);
       
        if(taken[temp % p]){output = k; break;}
        else{taken[temp % p] = 1;}
    }

    printf("%ld\n", output);

    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p,i,j,flag = 1,temp;
	long long int a[300];
	cin>>p>>n;
	for (i=0;i<n ; i++)
	{
		cin>>a[i];
		a[i] = a[i] % p;
	}	
	for (i=1;i<=n;i++)
	{
		//cout<<a[i];
		for (j = i+1 ; j<n;j++)
		{
		//	cout<<a[j]<<" ";
			if (a[i] == a[j])
			{
				flag = 0;
				temp = j;
				break;
			}
		}
		//cout<<endl;
		if (flag ==0)
		break;
	}
	if (flag ==0)
	cout<<++temp;
	else
	cout<<"-1";
	return 0;
}*/

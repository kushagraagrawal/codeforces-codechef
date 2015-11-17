#include <cstdio>

int main(){
    int n; scanf("%d", &n);
    long *value = new long[n];
    for(int k = 0; k < n; k++){scanf("%ld", value + k);}

    long output = 0, currentMax = - 30000000;
    for(int div = 1; div <= n / 3 ; div++){ // Minimum allowed triangle; If one or two vertices allowed, upper bound should be equal to n
        if(n % div != 0){continue;}
        for(int rem = 0; rem < div; rem++){
            output = 0;
            for(int k = 0; k < n / div; k++){output += value[div * k + rem];}
            if(output > currentMax){currentMax = output;}
        }
    }

    printf("%ld\n", currentMax);
    return 0;
}
/*#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,i;
	int a[20000];
	long int sum=0,sum1=0,sum2=0;
	cin>>n;
	
	for (i=0;i<n;i++)
	{
		cin>>a[i];
		sum+= a[i];
		if (i%2==0)
		sum1+= a[i];
		else
		sum2+= a[i];
	}
	if (n/2 >=3)
	cout<<max(sum,max(sum1,sum2));
	else
	cout<<sum<<endl;
	return 0;
}*/

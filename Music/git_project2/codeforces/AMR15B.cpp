#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
long long int b[100000];
void primeFactors(long long int n)
{
	long long int j=0;
    // Print the number of 2s that divide n
    while (n%2 == 0)
    {
        b[j] = 2;// printf("%d ", 2);
        n = n/2;
    	j++;
	}
 
    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
            //printf("%d ", i);
            b[j] = i;
			n = n/i;
			j++;
        }
    }
 
    // This condition is to handle the case whien n is a prime number
    // greater than 2
    if (n > 2)
        b[j] = n;
}

int main(){
	int T;
	long long int i,N,A[100000];
	cin>>T;
	while(T--)
	{
		cin>>N;
		for(i=0;i<N;i++)
		{
			cin>>A[i];
		}
		sort(A,A+N);
		primeFactors(A[N-1]);
		//long long int B[N][N];
		/*for(i=0;i<=N;i++)
		cout<<b[i]<<" ";	*/
	}

return 0;
}

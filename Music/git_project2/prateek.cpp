
#include<stdio.h>
#include<iostream>
using namespace std;
void subArraySum(long long int arr[],long long int, long long int);


int main()
{
    int T;
    cin>>T;
    long long int a[100000];
    
	long long int n,i ;
    long long int sum;
    while(T--)
    {
    	cin>>n>>sum;
    	for (i=0;i<n;i++)
    	cin>>a[i];
		subArraySum(a, n, sum);
    }
    
    return 0;
}
void subArraySum(long long int arr[],long long int n, long long int sum)
{
    
    long long int curr_sum = arr[0], start = 0, i;
 
    
    for (i = 1; i <= n; i++)
    {
        
        while (curr_sum > sum && start < i-1)
        {
            curr_sum = curr_sum - arr[start];
            start++;
        }
 
        
        if (curr_sum == sum)
        {
            printf ("YES\n");
            break;
        }
 
        
        if (i < n)
          curr_sum = curr_sum + arr[i];
    }
 
    
   
   
}
 

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long n,i,j,a[100000],max[100000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long m=a[n-1],k=0;
    
    for(i=n-1;i>=0;i--)
    {
        if(a[i]>m)
        {
            max[k++]=0;
            m=a[i];
        }
        else
        max[k++]=m-a[i]+1;
    }
    for(i=n-1;i>0;i--)
    cout<<max[i]<<" ";
    cout<<0<<" ";
}

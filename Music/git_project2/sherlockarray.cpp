#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int a[100000]={0};

int main() {
    int T,k;
    cin>>T;
    while(T--)
    {
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
        cin>>a[i];
    int sum1=0,sum2=0;
    if(N==1)
    {
    	sum1=sum2=a[0];
    	cout<<"YES\n";
    	
    }
    else if(N==2)
    {
    	cout<<"NO\n";
    }
    else
    {
    
	for(int j=2;j<N;j++)
        sum2 += a[j];
    k=1;
    do
        {
        sum1 += a[k-1];
        if(sum1==sum2)
        {
            cout<<"YES\n";
            break;
        }
        else
            sum2 -= a[k+1];
    	k++;
	}while(k<N-1);
        if(k==(N-1))
            cout<<"NO\n";
}	
	}
        return 0;
}


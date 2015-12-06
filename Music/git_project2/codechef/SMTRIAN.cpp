#include <iostream>
#define MAX 1000
using namespace std;
 
int main() {
    int n,t;
    cin>>t;
    while(t--)
    {
    cin>>n;
    long l,m;
    int arr[MAX][MAX],i=0,j=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cin>>arr[i][j];
        }
    }
  
        for(i=n-2;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            
            l=arr[i][j]+arr[i+1][j];
            m=arr[i][j]+arr[i+1][j+1];
            
            if(l>m)
            {
                arr[i][j]=l;
            }
            else
            {
                arr[i][j]=m;
            }
            
        }
    }
    cout<<arr[0][0]<<endl;
    
    }
    // your code goes here
	return 0;
}

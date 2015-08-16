#include <iostream>
#include <math.h>
using namespace std;
 
bool isPerfectSquare(long long int x)
{
    long long int s = sqrt(x);
    return (s*s == x);
}
 

bool isFibonacci(long long int n)
{
    
    return (isPerfectSquare(5*n*n + 4) ||
           isPerfectSquare(5*n*n - 4));
}
 

int main()
{long long int T,N;
cin>>T;
while (T--)
{
	cin>>N;
	isFibonacci(N)? cout <<"IsFibo\n":
                     cout <<"IsNotFibo\n" ;
	
}
  
  return 0;
}

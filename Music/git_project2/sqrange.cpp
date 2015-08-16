#include <iostream>
#include <cmath>
 
using namespace std;
 
bool isPerfectSquare(long a)
{
  long sqrtA = (long)sqrt(a*1.0);
  if( sqrtA*sqrtA == a )
    return true;
  return false;
}
 
int main()
{
  int T;
  cin >> T;
  while ( T-- > 0 )
  {
    long a,b;
    cin >> a >> b;
    long rootA, rootB;
    rootA = (long)sqrt(a*1.0);
    rootB = (long)sqrt(b*1.0);
    
    if( a == b && isPerfectSquare(a) )//special case 1
		cout << "1" << endl;
	else if( isPerfectSquare(a) ) //special case 2
		cout << (rootB-rootA+1) << endl;
	else
		cout << (rootB-rootA) << endl;
  }
  return 0;
}
}
/*First we find the square roots of lower bound and and upper bounds. The difference between them gives the required number.

For example consider the range [2,11]

sqrt(2) = 1.414
sqrt(11) = 3.316

If you round them off, and take the difference (3-1), it is 2 which is the required answer.

However we have to handle two special cases.

Case 1: Lower and upper bounds are same. 
For example [4, 4]. In this case we have to check if the given number is a perfect square. If it is,  output 1, otherwise output 0.

Case 2: If the lower bound is a perfect square.
In this case, we have to add 1 to the diff of square roots. */

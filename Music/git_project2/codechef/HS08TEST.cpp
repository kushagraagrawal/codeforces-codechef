#include <cstdlib>
#include <iostream>
 
using namespace std;
 
int main()
{
    const float FEE = 0.5;
    float balance;
    int withdraw;
    cin >> withdraw >> balance;
    cout.precision(2);
 
    if (withdraw + FEE > balance || withdraw % 5 != 0)
        cout << fixed << balance;
    else
    {
        cout << fixed << (balance - withdraw - FEE);
    }
 
    return(EXIT_SUCCESS);
}

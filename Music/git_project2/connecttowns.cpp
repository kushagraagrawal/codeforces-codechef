#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin>>T;
    while(T--)
    {
        int town,*routes,ans = 1;
        cin>>town;
        routes  = new int[town-1];
        for(int i=0;i<town-1;i++)
            cin>>routes[i];
        for(int i=0;i<town-1;i++)
           {   ans *= routes[i];
               ans = ans%1234567;
           }
         cout<<ans<<"\n";
        
    }
    return 0;
}

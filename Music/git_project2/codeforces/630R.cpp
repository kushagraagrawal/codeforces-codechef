#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    if(n%2==1){
        ll p1 = n/2;
        p1++;
        ll ans = 0;
        ans += p1*p1;
        ans += (p1-1)*(p1-1);
        if(ans%2==1){
            cout << 1 << endl;
        }
        else{
            cout << 2 << endl;
        }
        // cout << ans << endl;
    }
    else{
        ll p1 = n/2;
        p1 *= n;
        ll ans = p1;
        // cout << p1 << endl;
        if(ans%2==1){
            cout << 1 << endl;
        }
        else{
            cout << 2 << endl;
        }
    }
	return 0;
}

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

/*
H is the maximum height possible using r and g blocks
w[h][r] = number of ways to build tower of height h with r red blocks
for each h, g can be inferred from h and r: g = h*(h+1)/2 - r
w[h][r] = w[h-1][r-h]  {if r > h}
        + w[h-1][r]    {if g > h} 

then since each h only uses the row h-1, we can save more space but
the order of iteration of r becomes important.
*/

int mod = (int) 1e9 + 7;
int R, G;
int dp[200003];   

int main(){
    cin >> R >> G;
    int H;
    for(int i=1;i<=1000;++i){
        if( (i*(i+1))/2 > R+G ) {
            H = i-1;
            break;
        }
    }
    if(R > G) swap(R,G);
    dp[0] = dp[1] = 1;
    for(int h=2;h<=H;++h){
        int cur = (h*(h+1))/2;
        for(int r=R;r>=0;--r){
            int tmp = 0;
            if(r-h>=0) tmp = (tmp + dp[r-h])%mod;
            if(cur-r-h>=0) tmp = (tmp + dp[r])%mod;
            dp[r] = tmp;
        }
    }
    int ans = 0, tow = (H*(H+1))/2;
    for(int r=R;r>=0 && tow-r<=G;--r){
        ans = (ans + dp[r])%mod;
    }
    cout << ans << endl;
    return 0;
}

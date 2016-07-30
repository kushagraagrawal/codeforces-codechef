#include <cstdio>
#include <string>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <cstring>
#include <set>
#include <queue>
#include <algorithm>
#include <vector>
#include <map>
using namespace std ;
typedef long long LL;
typedef pair<int, int> P;
const int INF = 0x3f3f3f3f;
const double inf = 0x3f3f3f3f3f3f3f;
const double eps = 1e-8;
const int maxn = 1e5 + 5;
const int dr[] = {0, 0, -1, 1};
const int dc[] = {-1, 1, 0, 0};
int n, m;
inline bool is_in(int r, int c){
    return r >= 0 && r < n && c >= 0 && c < m;
}
map<int, int> mp;
 
int main(){
    cin >> n;
    int x;
    LL ans = 0;
    for(int i = 0; i < n; ++i){
        scanf("%d", &x);
        for(int j = 1; j < 31; ++j){
            ans += mp[(1<<j)-x];
        }
        ++mp[x];
    }
    cout << ans << endl;
    return 0;
}
 

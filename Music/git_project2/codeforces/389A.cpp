#include <stdio.h>
#include <iostream>
#include <sstream>
#include <vector>
#include <set>
#include <list>
#include <map>
#include <algorithm>
#include <stdio.h>
#include <math.h>
typedef long long lld;

using namespace std;

int gcd(int x, int y) {
    if (x < y) {
        return gcd(y, x);
    }
    if (y == 0) {
        return x;
    }
    return gcd(y, x % y);
}

int main(int argc, char* argv[]) {
    int n, g, x;
    cin >> n;
    cin >> g;
    for (int i = 1; i < n; ++i) {
        cin >> x;
        g = gcd(g, x);
    }
    cout << g * n << endl;
    return 0;
}

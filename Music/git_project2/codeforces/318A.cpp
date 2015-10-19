#include <iostream>
using namespace std;

int main(){
    long long int n, k; cin >> n >> k;
    cout << ((k <= (n+1)/2) ? (2*k - 1) : (2 * (k - (n + 1)/2) ) ) << endl;
    return 0;
}

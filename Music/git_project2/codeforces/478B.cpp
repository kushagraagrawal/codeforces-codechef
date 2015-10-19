#include <cstdio>
#include<iostream>
using namespace std;

int main(){

    long long n, m; cin>>n>>m;
    long long minPairs = ((n % m) * (n / m + 1) * (n / m) / 2) + ((m - n % m) * (n / m) * (-1 + n / m) / 2);
    long long maxPairs = (n - m + 1) * (n - m) / 2;
    cout<<minPairs<<" "<<maxPairs<<endl;
	   return 0;
}

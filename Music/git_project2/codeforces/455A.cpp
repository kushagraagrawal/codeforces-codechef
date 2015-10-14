#include <cstdio>
#include <vector>
#include<iostream>
using namespace std;
int main(){

    long n; cin>>n;

    std::vector<long> data(n);
    long maxElement(0);
    for(int p = 0; p < n; p++){
        cin>>data[p]; 
        maxElement = (maxElement > data[p]) ? maxElement : data[p];
    }

    std::vector<long long> counts(maxElement + 1);
    for(int p = 0; p < n; p++){counts[data[p]] += data[p];}

    long long output(0);
    std::vector<long long> points(maxElement + 1);
    points[0] = 0; points[1] = counts[1];

    for(int p = 2; p <= maxElement; p++){
        long long first = points[p - 2] + counts[p];
        long long second = points[p - 1];
        points[p] = (first > second) ? first : second;
    }

    cout<<points[maxElement];

    return 0;
}

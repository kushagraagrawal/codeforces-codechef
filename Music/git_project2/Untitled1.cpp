#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,c,m;
    cin>>t;
    while(t--){
        cin>>n>>c>>m;
        int answer=0,answer1,answer2,answer3;
        answer=n/c;
        answer1=answer/m;
        answer2=answer%m;
        answer3=(answer1+answer2)/m;// Computer answer
        answer=answer + answer1 + answer3;
        cout<<answer<<endl;
    }
    return 0;
}

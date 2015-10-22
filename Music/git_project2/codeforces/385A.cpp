#include <cstdio>
#include<iostream>
using namespace std;
int main(){

    int n(0), c(0); cin>>n>>c;
    int *price = new int[n];
    for(int k = 0; k < n; k++){cin>>*(price + k);//scanf("%d", price + k);
	}

    int maxDecrease(0); 
    for(int k = 1; k < n; k++){if(price[k - 1] - price[k] > maxDecrease){maxDecrease = price[k - 1] - price[k];}}

    if(maxDecrease > c){cout<<maxDecrease - c;}
    else{cout<<"0";}

    return 0;
}

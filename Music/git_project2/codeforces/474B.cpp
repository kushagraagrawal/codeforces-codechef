#include <cstdio>
#include <vector>
#include<iostream>
using namespace std;
long binarySearch(long long int data[], long input,long n){
 
    if(input < data[0]){return 0;}
    long left(0), right(n-1);
    long mid = (left + right) / 2;
 
    while(true){
        if(input < data[mid]){right = mid;}
        else if(input > data[mid]){left = mid;}
        else if(input == data[mid]){return mid;}
 
        if(right <= left + 1){
            if(input == data[left]){return left;}
            else{return left + 1;}
        }
        mid = (left + right) / 2;
    }
    return data[n-1];
}
 
int main(){
 
    long n(0); cin>>n;
 
	long long int worm[n];
    long cumsum(0);
    for(int p = 0; p < n; p++){
        long temp; 
        cin>>temp;//scanf("%ld", &temp); 
        cumsum += temp; 
        worm[p] = cumsum;
    }
 
    long m(0);cin>>m;// scanf("%ld", &m);
    while(m--){
        long x;cin>>x;// scanf("%ld", &x);
       cout<< 1 + binarySearch(worm, x,n)<<endl;//printf("%ld\n", 1 + binarySearch(wormVec, x));
    }
 
    return 0;
}
/*#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
 
int main()
{
	long n,m,i,q;
	cin>>n;
	long a[n],tmp;
	for(i=0;i<n;++i)
	{
		cin>>tmp;
		if(i)
			a[i] = a[i-1]+tmp;
		else
			a[0] = tmp;
	}
	cin>>m;
	vector<long> V(a,a+n);
	vector<long>::iterator it,iter;
	for(i=0;i<m;++i)
	{
		cin>>q;
		it = upper_bound(V.begin(),V.end(),q-1);
		cout<<it-V.begin()+1<<endl;
	}
	return 0;
}*/

/*
#include <cstdio>
#include <vector>
#include<iostream>
using namespace std;
long binarySearch(long long int data[], long input){

    if(input < data[0]){return 0;}
    long left(0), right(data.size() - 1);
    long mid = (left + right) / 2;

    while(true){
        if(input < data[mid]){right = mid;}
        else if(input > data[mid]){left = mid;}
        else if(input == data[mid]){return mid;}

        if(right <= left + 1){
            if(input == data[left]){return left;}
            else{return left + 1;}
        }
        mid = (left + right) / 2;
    }
    
    return 0;
}

int main(){

    long n(0); cin>>n;
    
	long long int worm[n];
    long cumsum(0);
    for(int p = 0; p < n; p++){
        long temp; 
        cin>>temp;//scanf("%ld", &temp); 
        cumsum += temp; 
        worm[p] = cumsum;
    }

    long m(0);cin>>m;// scanf("%ld", &m);
    while(m--){
        long x;cin>>x;// scanf("%ld", &x);
       cout<< 1 + binarySearch(worm, x)<<endl;//printf("%ld\n", 1 + binarySearch(wormVec, x));
    }

    return 0;
}

*/

/*#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int i,j,n,m,a,temp,c[1000],cumsum=0;
	long long int left,right,mid;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a;
		cumsum +=a;
		c[i] = cumsum;
	}
	cin>>m;
	for(i=0;i<m;i++)
	{
		cin>>temp;
		
		for(j=0;j<n;j++)
		{
			if(temp<=c[j])
			{
				cout<<j + 1<<endl;
				break;
			}
		}
	
		
	}
	return 0;
}
*/

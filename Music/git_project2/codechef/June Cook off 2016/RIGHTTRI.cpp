#include<bits/stdc++.h>
#define LL long long int
using namespace std;
int main(){
	LL T;
	double H,S;
	cin>>T;
	while(T--){
		cin>>H>>S;
		if(((S*4.0)/(H*H))>1)
			cout<<"-1"<<endl;
		else{
			double a[3];
			a[0] = H;
			double angle = asin((S*4.0)/(H*H))/2.0;
			//cout<<angle<<" "<<(S*4.0)/(H*H)<<endl;
		
			a[1] = (double)H*(double)sin(angle);
			a[2] = (double)H*(double)cos(angle);
			//cout<<a[0]<<a[1]<<a[2]<<endl;
			sort(a,a+3);
			cout.precision(24);
			cout<<a[0];
			cout.precision(24);
			cout<<" "<<a[1];
			cout.precision(24);
			cout<<" "<<a[2]<<endl;
		}
	
	}	
return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int a[1005]={0};
		int x,N,i;
		cin>>N;
		for(i=0;i<N;i++){
			cin>>x;
			a[x]++;
		}	
		int area =1,y,z,flag=2;
		for(i=1000;i>0;i--){
			if(a[i]>=2 && flag){
				
				if(a[i]>=4)
					{
						if (area*i > i*i){
							area *=i;
							flag--;
						}
						else{
							area*=i*i;
							flag -=2;
						}
						
					}
				else{
					area*=i;
					flag--;
				}
				//cout<<area<<endl;
			}
				
		}
		if(flag)
			cout<<"-1"<<endl;
		else
			cout<<area<<endl;
	}
return 0;
}

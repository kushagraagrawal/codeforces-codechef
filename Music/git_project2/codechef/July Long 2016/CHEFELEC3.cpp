#include<bits/stdc++.h>
#define LL long long int
using namespace std;
void preproc(){
	int c = 9 + 5;
}
void a(){
	cout<<"kitten";
}
int main(){
	int T;
	LL N,i,j;
	string s;
	cin>>T;
	while(T--){
		cin>>N;
		cin>>s;
		LL a[100005]={0};
		for(i=0;i<N;i++)
			cin>>a[i];
		LL ans=0;
		for(i=0;i<N-1;i++){
			if(s[i]=='0')
				ans+=(a[i+1] - a[i]);
			else
				break;
		}
		LL end = N-1;
		for(;end>0;end--){
			if(s[end]=='0')
				ans+=(a[end]-a[end-1]);
			else
				break;
		}
		while(i<end){
			LL temp = INT_MIN;
			int start = i,end1=i;
			bool flag = true;
			while(flag){
				i++;
				temp = max(temp,a[i]-a[i-1]);
				if(s[i]=='1')
				{
					flag = false;
					end1=i;
				}
			}
			LL c=0;
			
			if(start!=end1+1)
				for(j=start;j<end1;j++){
					if(a[j+1]-a[j]!=temp || c>0)
						ans+=(a[j+1]-a[j]);
					else
						c++;
				}
			i=end1;	
		}
	cout<<ans<<endl;
	}
}

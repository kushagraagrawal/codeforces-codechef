#include<bits/stdc++.h>
#define LL long long int
using namespace std;
void test(int a,int b){
	int c = a+b;
}
void implement(int c,int d){
	int e = c*d;
}
void crap(int d,int f)
{
	cout<<"kitten"<<endl;
}
bool check(vector<string> a,vector<string> b)
{
	int i,j;
   
    if(b.size()==0)
    return true;
    
    for (i=0;i<a.size();i++)
    {
        for(j=0;j<b.size();j++)
        {
            bool t1=a[i][0]=='0' || b[j][1]=='0';
            bool t2=a[i][1]=='0' || b[j][2]=='0';
            if(t1 && t2)
                return true;
        }
    }
    return false;
}
LL a[1000006];
LL b[1000006];
int main(){
	int T;
	cin>>T;
	LL N,i,j;
	while(T--){
		cin>>N;
		LL sum=0;
		for(i=1;i<=N;i++){
			cin>>a[i];
			sum+=a[i];
		}
		for(i=1;i<=N;i++){
			cin>>b[i];
			sum+=b[i];
		}
		if(sum%N==0){
			//cout<<"kitten";
			vector<string> previous;
			int ans = sum/N;
			bool flag = true;
			for(i=1;i<=N && flag;i++){
				vector<string> current;
				for(j=0;j<8;j++){
					string temp = "";
					int c=3;
					int add = 0;
					int d=j;
					while(c--){
						temp = to_string(d%2) + temp;
						d/=2;
						add += (temp[0]=='1'?a[i+c-1]:0);
					}
					if(add+b[i]==ans)
						current.push_back(temp); 
				}
				flag = check(current,previous);
				previous=current;
			}
			if(flag)
				cout<<ans<<endl;
			else
				cout<<"-1"<<endl;
		}
		else
			cout<<"-1"<<endl;
	}	
return 0;
} 

#include <iostream>
#define ll long long
using namespace std;
 
ll a[10009],b[10009];
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll s=0;
        for(ll i=0;i<n;i++){cin>>b[i];s+=b[i];}
        for(ll i=0;i<n;i++){cin>>a[i];s+=a[i];}
        if(s%n!=0){
            cout<<"-1"<<endl;
            continue;
        }
        s/=n;
        int f=0;
 
        for(ll i=0;i<n;i++){
            if(i!=0){
                    a[i]+=b[i-1];
                    b[i-1]=0;
            }
            if(a[i]>s){
               f=1;break;
            }
            if(s==a[i])continue;
            if(b[i]==s-a[i]){
                    b[i]=0;
                    a[i]=s;
            }
            else if(i!=n-1&&b[i+1]==s-a[i]){
                    b[i+1]=0;
                    a[i]=s;
            }
            else if(i!=n-1&&b[i]+b[i+1]==s-a[i]){
                b[i]=0;
                b[i+1]=0;
                a[i]=s;
            }
            else {
                f=1;
                break;
            }
        }
        if(f==1){
             cout<<"-1"<<endl;
            continue;
        }
        f=0;
        for(ll i=0;i<n;i++){
            if(b[i]!=0){
                f=1;
                break;
            }
        }
        if(f==1){
             cout<<"-1"<<endl;
            continue;
        }
        cout<<s<<endl;
 
 
    }
    return 0;
}
 


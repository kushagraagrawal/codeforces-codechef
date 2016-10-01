#include<bits/stdc++.h>
using namespace std;
int edge[4],sum;
int st,aim;
int main(){
    cin>>aim>>st;
    int count=0;
    edge[3]=edge[1]=edge[2]=st;sum=st*3;
    while(sum!=aim*3){
        for(int i=1;i<=3;i++){
            if(edge[i]==aim) continue;
            sum-=edge[i];
            edge[i]=min(aim,sum-1);
            sum+=edge[i];
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
} 

#include<bits/stdc++.h>
#define LL long long int
using namespace std;
bool row[100005],col[100005];
int main(){
	LL n,m,i,x,y,rowc=0,colc=0;
	cin>>n>>m;
	LL temp = n*n;
	for(i=0;i<m;i++){
		cin>>x>>y;
		if(row[x] && col[y]);
		//temp2 = a.size();
		
		//cout<<temp2<<endl;
		else if(!row[x] && !col[y]){
			temp--;
			temp = temp-(n-colc) + 1;
			colc++;
			temp = temp - (n-rowc) + 1;
			rowc++;
		}
		else if(row[x]){
			temp = temp - (n-rowc);
			colc++;
		}
		else{
			temp = temp - (n-colc);
			rowc++;
		}
		row[x]=col[y]=1;
		cout<<temp<<endl;
	}
	return 0;
}

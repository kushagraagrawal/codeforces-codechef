#include <iostream>
using namespace std;
 
long compute(long*,long*);
long n;
int main() {
int testcases,i=0;
cin>>testcases;
while(i<testcases) {
cin>>n;
long pieW[n],rackW[n];
for(int i=0;i<n;i++)
cin>>pieW[i];
for(int i=0;i<n;i++)
cin>>rackW[i];
 
cout<<compute(pieW,rackW)<<endl;
i++;
}
return 0;
}
 
long compute(long* a,long* b) {
long count=0;
long fill[n];
for(int m=0;m<n;m++)
fill[m]=0;
for(int j=0;j<n;j++) {
int pos=-1;
	for(int k=0;k<n;k++) {
	   if(a[j]<=b[k]&&fill[k]==0) {
	   if(pos!=-1&& b[k]<b[pos]) {
	   fill[pos]=0;
	   fill[k]=a[j];
	   pos=k;
	   }else {
	  if(pos==-1) {
	   fill[k]=a[j];
	    pos=k;
	  }
 
	  }
 
	   }
	}
}
for(int l=0;l<n;l++) {
if(fill[l]==0)
	count++;
}
return n-count;
}

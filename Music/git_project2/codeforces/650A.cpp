#include<bits/stdc++.h>
#define LL long long int
using namespace std;
const int maxn = 200020;
struct node{
	LL x,y;
}a[maxn];
bool cmp1(node a,node b){
	if(a.x==b.x) return a.y<b.y;
	return a.x<b.x;
}
bool comp2(node a,node b){
	if(a.y==b.y) return a.x<b.x;
	return a.y<b.y;
}
int n;
int main(){
	cin>>n;
	LL sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i].x>>a[i].y;
	}
	sort(a,a+n,cmp1);
	LL sum1=0;
	for(int i=0;i<n;i++){
		int j=i;
		sum1=0;
		while(j<n&&a[i].x==a[j].x){
			sum1++;
			j++;
		}
		i=j-1;
		sum+=sum1*(sum1-1)/2;
	}
	sort(a,a+n,comp2);
	sum1=0;
	for(int i=0;i<n;i++){
		int j=i;
		sum1=0;
		while(j<n&&a[i].y==a[j].y){
			sum1++;
			j++;
		}
		i=j-1;
		sum+=sum1*(sum1-1)/2;
	}
	sum1=0;
	for(int i=0;i<n;i++){
		int j=i;
		sum1=0;
		 while(j<n&&a[i].y==a[j].y&&a[j].x==a[i].x){
            sum1++;
             j++;
         }
         i=j-1;
         sum-=sum1*(sum1-1)/2;
	}
	cout<<sum;
	return 0;
}


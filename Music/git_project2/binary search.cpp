#include<iostream>
using namespace std;
int main()
{int a[10]={1,2,3,4,5,6,7,8,9,10};
int b,low=1,high=10,mid;
cin>>b;

while (low<=high)
{mid= low + (high-low)/2; //to prevent overflow
if(a[mid]==b)
{break;}
else if(b>a[mid])
{low=mid+1;
}
else 
high=mid-1;
}
cout<<b <<" found in "<<(mid+1);
return 0;
}

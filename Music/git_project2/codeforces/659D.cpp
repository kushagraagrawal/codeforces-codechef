#include<bits/stdc++.h>
using namespace std;
//pair<int,int> ;
int main()
{
	int n,k=0;
	cin>>n;
	vector<pair<int,int> > v;
	pair<int,int> p;
	int i;
	for(i=0;i<=n;i++)
	{
		cin>>p.first>>p.second;
		v.push_back(p);
	}
	for (i=1;i<n;i++)
    {
        if (v[i].second>v[i-1].second && v[i+1].first<v[i].first) {k++;}
        else if (v[i].second<v[i-1].second && v[i+1].first>v[i].first) {k++;}
        else if (v[i].first<v[i-1].first && v[i+1].second<v[i].second) {k++;}
        else if (v[i].first>v[i-1].first && v[i+1].second>v[i].second) {k++;}
    }
	cout<<k<<endl;
	return 0;
}

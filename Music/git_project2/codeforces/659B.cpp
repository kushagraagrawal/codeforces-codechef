#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<pair<int,string> > comp[10009];
int main()
{
	int i;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		int id,score;
		string name;
		cin>>name>>id>>score;
		comp[id].push_back(make_pair(score,name));
	}
	for(i=1;i<=m;i++)
	{
		if(comp[i].size() == 0)
		continue;
		else if(comp[i].size() == 2)
		cout<<comp[i][0].second<<" "<<comp[i][1].second<<endl;
		else
		{
			sort(comp[i].begin(),comp[i].end());
			reverse(comp[i].begin(),comp[i].end());
			if(comp[i][1].first == comp[i][2].first)
			cout<<"?"<<endl;
			else
			cout<<comp[i][0].second<<" "<<comp[i][1].second<<endl;
		}
	}
return 0;
}

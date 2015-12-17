#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector <int> zeroes;
	int rem = 1 , total = 0;
	int a = 0,b = 0;
	while(n--)
	{
		cin>>a>>b;
		if (b==0)
		{
			zeroes.push_back(a);
		}
		else
		{
			total += a;
			rem += b-1;
		}
	}
	sort(zeroes.begin(),zeroes.end());
	for (int k = zeroes.size() - 1;k>=0 && rem > 0;k--,rem--)
	{
		total += zeroes[k];
	}
cout<<total<<endl;
return 0;
}

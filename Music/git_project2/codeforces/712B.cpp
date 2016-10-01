#include <bits/stdc++.h>
using namespace std;

int main()
{
	int len = 0;
	int num_u = 0, num_r = 0, num_l = 0, num_d = 0;
	char ch;
	
	while(cin >> ch)
	{
		if(ch == 'R') num_r++;
		else if(ch == 'L') num_l++;
		else if(ch == 'U') num_u++;
		else if(ch == 'D') num_d++;
		
		len++;
	}
	
	if(len%2 == 1)
	{
		cout << "-1" << endl;
	}
	else
	{
		int ans = abs(num_r-num_l) / 2 + abs(num_u-num_d) / 2;
		
		if(abs(num_r-num_l)%2 == 1) ans++;
		else if(abs(num_u-num_d)%2 == 1) ans++;
		cout << ans << endl;
	}
}

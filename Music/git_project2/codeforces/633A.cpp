#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(c%a==0 || c%b==0)
	cout<<"Yes"<<endl;
	else if(c<a && c<b)
	cout<<"No"<<endl;
	else
	{
		int maxa = max(a,b);
		int mina = min(a,b);
		bool ans = true;
		while(c>0)
		{
			c-=maxa;
			if(c<0)
			{
				c+=maxa;
				c-=mina;
				if(c<0)
				{
					ans = false;
					break;
				}
			}
			else{
            if( c%mina== 0 )
                break;
        	}
		}
		if(ans)
		cout << "Yes";
    else
        cout << "No";
	
	}
return 0;
}

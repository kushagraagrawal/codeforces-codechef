#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	int R,N,i;
	cin>>T;
	while(T--)
	{
		cin>>N>>R;
		int points[N][4];
		int octant[9] = {0},i;
		for(i=0;i<N;i++)
		{
			cin>>points[i][0]>>points[i][1]>>points[i][2];
			if (points[i][0] >=0 && points[i][1]>=0 && points[i][2]>=0)
				{
				octant[1]++;
				points[N][3] = 1;
				}
			else if (points[i][0] <=0 && points[i][1]>=0 && points[i][2]>=0)
				{
				
				octant[2]++;
				points[N][3] = 2;
				}
			else if	(points[i][0] <=0 && points[i][1]<=0 && points[i][2]>=0)
				{
				octant[3]++;
				points[N][3] = 3;
				}
			else if	(points[i][0] >=0 && points[i][1]<=0 && points[i][2]>=0)
				{
				octant[4]++;
				points[N][3] = 4;
				}
			else if	(points[i][0] >=0 && points[i][1]>=0 && points[i][2]<=0)
				{
				octant[5]++;
				points[N][3] = 5;
				}	
			else if	(points[i][0] <=0 && points[i][1]>=0 && points[i][2]<=0)
				{
				octant[6]++;
				points[N][3] = 6;
				}
			else if	(points[i][0] <=0 && points[i][1]<=0 && points[i][2]<=0)
				{
				octant[7]++;			
				points[N][3] = 7;
				}
			else if	(points[i][0] >=0 && points[i][1]<=0 && points[i][2]<=0)
				{
				octant[8]++;
				points[N][3] = 8;
				}
		}		
		int min = 151,temp;
		float temp2;
		for(i=0;i<9;i++)
		{
			if(octant[i] <= min)
			{
				min = octant[i];
				temp = i;
			}
		}
		int ans = min;
		/*cout<<temp<<endl;
		cout<<ans<<endl;*/
		for (i=1;i<N;i++)
		{
			if(points[i][3]==temp)
			{
				temp2 = sqrt((points[i][0]*points[i][0]) + (points[i][1] * points[i][1]) + (points[i][2] * points[i][2]));
				cout<<temp2;
				if(temp2 - R <0.001)
				ans--;
			}
		}
		cout<<ans<<endl;	
	}	
	return 0;
}

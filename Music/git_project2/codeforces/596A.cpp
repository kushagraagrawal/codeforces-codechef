#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int x,y,minx = 1001,maxx = -1001,miny=1001,maxy=-1001;
	for(int i=0;i<N;i++)
	{
		cin>>x>>y;
		minx = min(minx,x);
		maxx = max(maxx,x);
		miny = min(miny,y);
		maxy = max(maxy,y);
	}
	if(maxx!=minx && maxy!=miny)
	cout<<(maxy-miny)*(maxx-minx);
	else
	cout<<"-1";
	return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int i,a[4][2];
	float temp1,temp2,temp3,temp4,temp5,temp6,temp7;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i][0]>>a[i][1];		
	}
	if(n==1)
	cout<<"-1"<<endl;
	else if(n==2)
	{
		temp1 = sqrt(pow(a[0][0] - a[1][0],2) + pow(a[0][1] - a[1][1],2));
	//	cout<<temp1<<endl;
		temp1 = temp1/sqrt(2);
		cout<<temp1*temp1<<endl;
	}
	else if(n==3)
	{
		temp1 = sqrt(pow(a[0][0] - a[1][0],2) + pow(a[0][1] - a[1][1],2));
		temp2 = sqrt(pow(a[2][0] - a[1][0],2) + pow(a[2][1] - a[1][1],2));
		temp3 = sqrt(pow(a[2][0] - a[0][0],2) + pow(a[2][1] - a[0][1],2));
		temp4 = max(temp1,max(temp2,temp3));
		if(temp1 == temp4)
		cout<<temp2*temp3;
		else if(temp2==temp4)
		cout<<temp1*temp3;
		else
		cout<<temp1*temp2;
	}
	else
	{
		temp1 = sqrt(pow(a[0][0] - a[1][0],2) + pow(a[0][1] - a[1][1],2));
		temp2 = sqrt(pow(a[2][0] - a[1][0],2) + pow(a[2][1] - a[1][1],2));
		temp3 = sqrt(pow(a[2][0] - a[0][0],2) + pow(a[2][1] - a[0][1],2));
		temp4 = sqrt(pow(a[3][0] - a[2][0],2) + pow(a[3][1] - a[2][1],2));
		temp5 = sqrt(pow(a[3][0] - a[0][0],2) + pow(a[3][1] - a[0][1],2));
		temp6 = sqrt(pow(a[3][0] - a[1][0],2) + pow(a[3][1] - a[1][1],2));
		temp7 = max(temp1,max(temp2,temp3));
		if(temp1 == temp7)
		cout<<temp2*temp3;
		else if(temp2==temp7)
		cout<<temp1*temp3;
		else
		cout<<temp1*temp2;
		
	}
return 0;
}
*/

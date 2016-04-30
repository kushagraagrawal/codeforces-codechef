#include<bits/stdc++.h>
using namespace std;
int main()
{
	fstream fin,fout;
	int T;
	fin.open("A-large (1).in",ios::in);
	fout.open("filefor1.in",ios::out);
	fin>>T;
	for(int q=0;q<T;q++)
	
	{
		fout<<"Case #"<<q+1<<": ";
		string s;
		fin>>s;
		int i,a[26]={0}, b[10] = {0};
		for(i=0;i<s.length();i++)
		{
			a[s[i]-'A']++;
		}
		if(a[25]>0)
		{
			b[0] = a[25];
			a[4] -= a[25];
			a[17] -=a[25];
			a[14] -=a[25];
			a[25] = 0;
		//	if(a[4] >0 && a[17]>0 &&a[14]>0)
		}
		if(a[22]>0)
		{
			b[2] = a[22];
			a[19]-=a[22];
			a[14]-=a[22];
			a[22]=0;
		}
		if(a[20]>0)
		{
			b[4]=a[20];
			a[5] -=a[20];
			a[14]-=a[20];
			a[17]-=a[20];
			a[20]=0;
			
		}
		if(a[23]>0)
		{
			b[6] = a[23];
			a[18]-=a[23];
			a[8]-=a[23];
			a[23]=0;
			
		}
		if(a[6]>0)
		{
			b[8]=a[6];
			a[4]-=a[6];
			a[8]-=a[6];
			a[7]-=a[6];
			a[19]-=a[6];
			a[6]=0;
		}
		if(a[14]>0)
		{
			b[1]=a[14];
			a[13]-=a[14];
			a[4]-=a[14];
			a[14]=0;
		}
		if(a[19]>0)
		{
			b[3]=a[7];
			a[7]-=a[19];
			a[17]-=a[19];
			a[4]-=a[19]*2;
			a[19]=0;
		}
		if(a[5]>0)
		{
			b[5]=a[5];
			a[8]-=a[5];
			a[21]-=a[5];
			a[4]-=a[5];
			a[5]=0;
		}
		if(a[18]>0)
		{
			b[7]=a[18];
			a[4]-=a[18]*2;
			a[21]-=a[18];
			a[13]-=a[18];
			a[18]-=a[18];
		}
		if(a[8]>0)
		{
			b[9]=a[8];
			a[13]-=a[8]*2;
			a[4]-=a[8];
			a[8]=0;
		}
		for(i=0;i<10;i++)
		{
			if(b[i]>0)
			{
				for(int j=0;j<b[i];j++)
				fout<<i;
			}
		}
		fout<<endl;
	}
return 0;
}

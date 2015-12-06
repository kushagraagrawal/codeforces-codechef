#include<bits/stdc++.h>
using namespace std;
int main()
{
	fstream fin,fout;
	fin.open("A-large.in",ios::in);
	fout.open("file1.in",ios::out);
	int T;
	fin>>T;
	for(int q=0;q<T;q++)
	{
		fout<<"Case #"<<q+1<<": ";
		int l,i;
		long sum=0,count=0;
		char c;
		fin>>l;
		for(i=0;i<=l;i++)
		{
			fin>>c;
			if(sum<i)
			{
				count+=i-sum;
				sum+=i-sum;
			}
			sum+=c-48;
		}
	fout<<count<<endl;
		
	}
	fin.close();
	fout.close();
	return 0;
	
}

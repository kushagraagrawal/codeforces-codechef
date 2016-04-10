#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	fstream fin,fout;
	fin.open("D-small-attempt0.in",ios::in);
	fout.open("filefor4.in",ios::out);
	fin>>T;
	for(int q=0;q<T;q++)
		{
		fout<<"Case #"<<q+1<<": ";
		int K,C,S;
		fin>>K>>C>>S;
		if(K==1)
		fout<<1<<endl;
		else
		{
			for(int i=1;i<=K;i++)
			fout<<i<<" ";
			fout<<endl;
		}
	}
	
	fin.close();
	fout.close();
return 0;
}

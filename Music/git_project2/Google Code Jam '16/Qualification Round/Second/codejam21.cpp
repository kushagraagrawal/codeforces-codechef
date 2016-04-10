#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	fstream fin,fout;
	fin.open("B-large.in",ios::in);
	fout.open("filefor2.in",ios::out);
	fin>>T;
	for(int q=0;q<T;q++)
	{
		fout<<"Case #"<<q+1<<": ";
		string s;
		fin>>s;
		int ways=0;
		for(int i=0;i<s.length()-1;i++)
		{
			if(s[i]=='-')
			{
				if(s[i+1]=='+')
				ways++;
			}
			else if(s[i]=='+')
			{
				if(s[i+1]=='-')
				ways++;
			}
		}
		if(s[s.length()-1]=='+')
		fout<<ways<<endl;
		else
		fout<<ways+1<<endl;
	}
	fin.close();
	fout.close();
return 0;
}

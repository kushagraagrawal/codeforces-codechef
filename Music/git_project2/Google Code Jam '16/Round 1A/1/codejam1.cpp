#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	fstream fin,fout;
	fin.open("A-large-practice.in",ios::in);
	fout.open("filefor1.in",ios::out);
	fin>>T;
	for(int q=0;q<T;q++)
	{
		fout<<"Case #"<<q+1<<": ";
		string s;
		list<int>l;
		fin>>s;
		l.push_front(s[0]);
		for(int i=1;i<s.length();i++){
			if(s[i]<l.front()){
				l.push_back(s[i]);
			}
			else{
				l.push_front(s[i]);
			}
		
		}
		while(!l.empty()){
			fout<<(char)l.front();
			l.pop_front();
		}
		fout<<"\n";
		/*if(s[1]>s[0]){
		
		sout = s[1];
		sout = sout + s[0];
		}
		else
		{
		sout = s[0];
		sout = sout + s[1];
		}
		//cout<<sout<<endl;
		for(int i=2;i<s.length();i++)
		{
			if(s[i]>=sout[0])
			{
				sout = s[i] + sout;
			}
			else
			sout = sout + s[i];
		}*/
		//fout<<(string)sout<<endl;
	}
	fin.close();
	fout.close();
return 0;
}

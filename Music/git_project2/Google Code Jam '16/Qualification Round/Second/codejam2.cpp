#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	fstream fin,fout;
	fin.open("B-small-attempt0.in",ios::in);
	fout.open("filefor2.in",ios::out);
	fin>>T;
	for(int q=0;q<T;q++)
	{
		fout<<"Case #"<<q+1<<": ";
		string s;
		fin>>s;
		int a[2]={0};
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='-')
			a[0]++;
			else
			a[1]++;
		}
		if(a[0]==s.length())
		fout<<"1"<<endl;
		else if(a[1]==s.length())
		fout<<"0"<<endl;
		else if(s.length()==2)
		{
			if(s=="++")
			fout<<"0"<<endl;
			else if(s=="+-")
			fout<<"2"<<endl;
			
			else if(s=="-+")
			fout<<"1"<<endl;
			else 
			fout<<"0"<<endl;
		}
		else
		{
			int count1=0,count2=0,i,j,temp = s.length(),ways=0;
			while(temp>0)
			{
				if(s[0]=='-')
				{
					count1++;
					for(j=1;j<temp;j++)
					{
						if(s[j]=='-')
						count1++;
						else
						break;
					}
					//cout<<count1<<endl;
					for(i=0;i<temp;i++)
					if(s[i]=='+')
					s[i]='-';
					else
					s[i]='+';
					std::reverse(s.begin(),s.end());
					temp -= count1;
				}
				else
				{
					count2=1;
					for(j=1;j<temp;j++)
					{
						if(s[j]=='+')
						count2++;
						else
						break;
					}
					for(i=0;i<temp;i++)
					if(s[i]=='+')
					s[i]='-';
					
					
				
				}
				ways++;
				//cout<<s<<" "<<temp<<endl;
			}
		fout<<ways<<endl;
		}
		
	
	}

fin.close();
fout.close();
return 0;
}

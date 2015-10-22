#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,b[10] = {0},flag = 1;
	string s;
	getline (cin, s);
	//cin>>s;
	int index = 0;
	while (index <s.size())
	{
		if(s[index] != '1') 
		{
			flag = 0;
			 cout<<"NO";
			 break;
			 
		}
		else
		{
			if(index < s.size() - 2 && s[index + 1] == '4' && s[index+2] == '4')
			{
				index +=3;
			}
			else if(index <s.size() - 1 && s[index +1] =='4')
			{
				index += 2;
			}
			else
			index++;
		}
		
	}	
if (flag==1)
cout<<"YES"<<endl;
return 0;
} 

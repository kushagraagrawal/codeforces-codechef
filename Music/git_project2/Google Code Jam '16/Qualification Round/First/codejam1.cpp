#include<bits/stdc++.h>
#define LL long long int
using namespace std;
int main()
{
	fstream fin,fout;
	LL q;
	fin.open("A-large (1).in",ios::in);
	fout.open("file1.in",ios::out);
	int T;
	fin>>T;
	
	for(q=0;q<T;q++)
	
	{
		fout<<"Case #"<<q+1<<": ";
			LL N;
		fin>>N;
		LL temp1 = N;
		bool a[10] = {false};
		if(N==0)
		fout<<"INSOMNIA"<<endl;
		else
		{
			bool flag1 = false;
			LL count1 = 1;
			while(flag1 == false){
			
			LL temp = N,count2=0;
			int i;
			do{
				a[temp%10] = true;
				temp/=10;
			}while(temp);	
			for(i=0;i<10;i++)
			{
				if(a[i] == true)
				count2++;
				else
				{
				//	cout<<"test";
					//flag = false;
					break;
				}
			}
			if(count2 == 10)
			{
				flag1 = true;
				fout<<N<<endl;
				break;
			}
			else
			{
				N = (++count1)*temp1;
			}
			/*if(flag)
			cout<<N<<endl;
			else
			{
				N = (++count)*temp1;
				flag = true;
			}	*/
		}
		}	
	}	
	fin.close();
	fin.close();
	return 0;
}

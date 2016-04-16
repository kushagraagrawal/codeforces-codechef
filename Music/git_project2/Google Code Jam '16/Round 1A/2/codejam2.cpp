#include<bits/stdc++.h>
using namespace std;
int main()
{
 	int T;
 	fstream fin,fout;
 	int i;
 	fin.open("B-large-practice.in",ios::in);
 	fout.open("filefor2.in",ios::out);
 	fin>>T;
 	for(int j=0;j<T;j++)
 	{
 		int a[2501] = {0};
		int n;
		fin>>n;
		int x = 0;
		for(i=0;i<((2*n-1)*n);i++){
			fin>>x;
			a[x]++;
		}	
		fout<<"Case #"<<j+1<<": ";
		for(i=0;i<2501;i++){
			if(a[i]!=0&&a[i]%2==1){
				fout<<i<<" ";
			}
		}
	fout<<endl;
	}
	fin.close();
	fout.close();
return 0;
}

#include<bits/stdc++.h>
//#define hash 26
using namespace std;
int main()
{
	string s1,s2,s3,s4,s5,s6;
	int flag = 1;
	long int i,a[26] = {0},b[26] = {0},hash1=0,hash2=0,hash3=0,hash4=0;
	cin>>s1>>s2;
	/*for(i = 0;i<s1.length();i++)
	{
		a[s1[i] - 'a']++;
		b[s2[i] - 'a']++;	
	}*/
	//cout<<s1.length()/2<<endl;
	s3 = s1.substr(0,s1.length()/2);
	s4 = s1.substr(s1.length()/2);
	s5 = s2.substr(0,s2.length()/2);
	s6 = s2.substr(s2.length()/2);
	//cout<<s3<<" "<<s4<<" "<<s5<<" "<<s6;
	for(i=0;i<s3.length();i++)
	{
		hash1 += s3[i] - 'a';
		hash2 += s4[i] - 'a';
		hash3 += s5[i] - 'a';		
		hash4 += s6[i] - 'a';
	}
//	cout<<hash1<<" "<<hash2<<" "<<hash3<<" "<<hash4;
	if (hash1== hash3 && hash2==hash4)
	{
		cout<<"YES";
		flag = 0;
	}
	
	else if(hash1==hash4 && hash2 == hash3)
	{
		cout<<"YES";
		flag = 0;
		}
		if(flag)
		cout<<"NO"<<endl;
	return 0;
}

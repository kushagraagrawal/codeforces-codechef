#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,s1;
	cin>>s;
	int n;
	int a[26]={0};
	cin>>n;
	for(int i = 0;i<s.length();i++)
		a[s[i] -'a']++;
	while(n--){
		cin>>s1;
		bool flag = true;
		for(int i=0;i<s1.length();i++){
			if(!a[s1[i]-'a'])
				flag = false;
		}
		if(flag)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
return 0;
}


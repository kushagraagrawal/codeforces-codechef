#include<bits/stdc++.h>
using namespace std;
 
int a[26];
 
int main(){
	string s;
	cin >>s;
 
	string result="NO\n";
 
	int i,j;
	i=0;
	while(s[i]){
		a[s[i] - 'a']++;
		i++;
	}
 
	set<int> myset;
	for(i=0;i<26;i++){
		if(a[i]){
			myset.insert(a[i]);
		}
	}
 
	if(myset.size() == 1){
		result ="YES\n";
	}
	else{
		for(i=0;i<26;i++){
			if(a[i] == 0)continue;
			set<int> mset;
 
			a[i]--;
 
			for(j=0;j<26;j++){
				if(a[j])
					mset.insert(a[j]);
			}
 
			if(mset.size() == 1){
				result ="YES\n";
				break;
			}
 
			a[i]++;
		}
	}
 
	cout << result;
	return 0;
}

#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

int main() {
    int k; string q; cin >> k >> q;
    set<char> s; s.insert(q[0]);
    vector<string> v; string temp = "";
    for (auto c: q) {
        if (s.find(c) == s.end()) {
            s.insert(c);
            v.push_back(temp);
            temp = c;
        } else {
            temp += c;
        }
    }
    v.push_back(temp);
    
    // cout << v.size() << endl;
    if (v.size() < k) {
        cout << "NO" << endl;
    } 
    else {
        cout << "YES" << endl;
        for (int i = 0; i < k - 1; i++) {
            cout << v[i] << endl;
        }
        string acc = "";
        for (int i = k - 1; i < v.size(); i++) {
            acc += v[i];
        }
        cout << acc << endl;
    }
}
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,k,temp,flag = 1;
	string s;
	cin>>k;
	cin>>s;
	if(s.length()<k)
	cout<<"NO"<<endl;
	else
	{
		temp = s.length() / k;
		while (i<s.length())
		{
			if (s [i] == s[i + temp] )
			flag = 0;
			i += temp;
		}
	if(flag==0)
	cout<<"NO"<<endl;
	else
	{
		cout<<"YES"<<endl;
		i = 0;
		for(i = 0;i<s.length();i+=temp)
		{
			cout<<s.substr(i,i + temp)<<endl;
		}
	}
	

	}
	return 0;
}*/

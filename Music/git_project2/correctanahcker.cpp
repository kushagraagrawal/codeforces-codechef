#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string str1;
    string str2;
    cin>>str1;
    cin>>str2;
    int count1[26]={0},count2[26]={0};
    int i=0,j=0;
    long long ans=0;
    
    for(i=0;i<str1.length();i++)
        count1[str1[i]-'a']++;
    for(i=0;i<str2.length();i++)
        count2[str2[i]-'a']++;
    
    for(i=0;i<26;i++)
        ans += abs(count1[i]-count2[i]);
    
    cout<<ans;
    return 0;
}

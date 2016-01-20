#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int sum(0),n,p;
    string c="1",word;
    bool flag=false;
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        cin >> word;
        if (word[0]=='0')
        {
            flag=true;
            break;
        }
        if (word[0]=='1')
        {
            p=0;
            while (p+1<word.length() && word[p+1]=='0') ++p;
            if (p+1!=word.length()) c=word;
            else sum += p;
        } else c=word;
    }
    if (flag) printf("0");
    else {
        cout << c ;
        for (int i=0;i<sum;++i) printf("0");
    }
    return 0;
}

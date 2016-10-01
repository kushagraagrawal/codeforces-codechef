#include<cstdio>  
#include<iostream>  
#include<algorithm>  
#include<cstring>  
#include<cmath>  
using namespace std;  
typedef long long ll;  
char s[1000+5][10];  
int main()  
{  
    int n;  
    cin>>n;  
    int flag1=-1;  
    int flag2=-1;  
    for(int i=0;i<n;i++){  
        cin>>s[i];  
        if(s[i][0]=='O'&&s[i][1]=='O'){  
            flag1=i;  
            flag2=0;  
        }  
        else if(s[i][3]=='O'&&s[i][4]=='O'){  
            flag1=i;  
            flag2=1;  
        }  
    }  
    if(flag1==-1){  
        cout<<"NO"<<endl;  
    }  
    else{  
        cout<<"YES"<<endl;  
        for(int i=0;i<n;i++){  
            if(flag1==i){  
                if(flag2==0){  
                    printf("++");  
                    for(int j=2;j<5;j++){  
                        printf("%c",s[i][j]);  
                    }  
                    printf("\n");  
                }  
                else if(flag2==1){  
                    for(int j=0;j<3;j++){  
                        printf("%c",s[i][j]);  
                    }  
                    printf("++\n");  
                }  
            }  
            else{  
                printf("%s\n",s[i]);  
            }  
        }  
    }  
  
    return 0;  
}  

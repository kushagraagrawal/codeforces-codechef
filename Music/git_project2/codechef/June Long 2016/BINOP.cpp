 #include<bits/stdc++.h>
    #define LL long long int
    using namespace std;
    int main(){
    	LL T,i;
    	string s1,s2;
    	cin>>T;
    	while(T--)
    	{
    		cin>>s1>>s2;
    		bool flag = true;
    		LL a=0,b=0,count1=0,count0=0;
    		for(i=0;i<s1.length();i++)
    			{
    				
    				if(s1[i]=='1')
    				count1++;
    				else
    				count0++;
    				
    				if(s1[i]!=s2[i])
    				{
    					if(s1[i]=='1')
    					a++;
    					else
    					b++;
    				}
    			}
    			if(count1==s1.length() || count0 == s1.length())
    			cout<<"Unlucky Chef"<<endl; 
    			//cout<<a<<" "<<b;
    			else{
    			cout<<"Lucky Chef"<<endl;
    			cout<<max(a,b)<<endl;
    			}
    		}
     
    return 0;
    }  

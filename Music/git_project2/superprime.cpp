#include<bits/stdc++.h>
using namespace std;
bool is_perfect(long long int number);
bool isPrime (long long int num);
int main()
{
	long long int i,q,n;
	long long int a[100000];
	cin>>q;
	for(i=0;i<q;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<q;i++)
	{
		if(is_perfect(a[i]))
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
return 0;
}
bool is_perfect(long long int number)
{
    int limit = sqrt((double)number);
    int sum = 1;
    for (int i=2; i<=limit; i++)
    {
           if (number % i == 0)
           {
                 sum += i ;
                 if(number != i*i)
                 sum += number/i;
                 
           }
     }
if(isPrime(sum))
return true;
else
return false;
} 
bool isPrime (long long int num)
{
    if (num <=1)
        return false;
    else if (num == 2)         
        return true;
    else if (num % 2 == 0)
        return false;
    else
    {
        bool prime = true;
        int divisor = 3;
        double num_d = static_cast<double>(num);
        int upperLimit = static_cast<int>(sqrt(num_d) +1);
        
        while (divisor <= upperLimit)
        {
            if (num % divisor == 0)
                prime = false;
            divisor +=2;
        }
        return prime;
    }
}

#include <iostream>
using namespace std;

int freeCash(int ar[][2],int number)
{
	int count=1;
	int max = 1;
	
	for(int i = 0; i<number-1; i++)
	{
		if((ar[i][0] == ar[i+1][0]) && (ar[i][1] == ar[i+1][1]))
			count++;
		else
		{
			if(count > max)
			{
				max = count;
			}
			count = 1;
		}
	}
	if(count > max)
		{
				max = count;
		}
	return max;
}

int main()
{
	int ar[100010][2];
	int number;
	cin >> number;
	for(int i=0;i<number;i++)
	{
		cin >> ar[i][0];
		cin >> ar[i][1];
	}
	cout << freeCash(ar,number);
	return 0;
}

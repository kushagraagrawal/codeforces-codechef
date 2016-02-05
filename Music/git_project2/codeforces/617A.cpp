#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long x, i, n;
	int s[]= {1, 2, 3, 4, 5};

	cin >> x;
	n = 0;

	for(i=4; i>=0; i--){
		if(x%s[i]==0){
			n = n+x/s[i];
			break;
		}
		else {
			while(x>s[i]){
				n = n + (x/s[i]);
				x=x%s[i];
			}
		}
	}

	printf("%d\n", n);

	return 0;


}

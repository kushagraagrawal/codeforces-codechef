#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,N,S,i;
	cin>>T;
	while(T--)
	{
		int count = 0;
		cin>>N;
		vector<int> a(N);
		for(i=0;i<N;i++)
		cin>>a[i];
		cin>>S;
		sort(a.begin(),a.end());
		for (int i = 0; i < N - 2; i++)
    	{
        // Initialize other two elements as corner elements
        // of subarray arr[j+1..k]
        int j = i + 1, k = N - 1;
 
        // Use Meet in the Middle concept
        while (j < k)
        {
            // If sum of current triplet is more or equal,
            // move right corner to look for smaller values
            if (a[i] + a[j] + a[k] >= S)
                k--;
 
            // Else move left corner
            else
            {
                // This is important. For current i and j, there
                // can be total k-j third elements.
                count += (k - j);
                j++;
            }
        }
    }
    	cout<<count<<endl;
	}
return 0;
}

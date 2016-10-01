#include<bits/stdc++.h>
using namespace std;
int shop[100100], n;

int binary(int x)
{
    int low=0, up = n-1, mid;

    mid = (low+up)/2;

    while(low<=up)
    {
        if(shop[mid]<=x && shop[mid+1]>x)
            return mid+1;
        if(shop[mid]==x && shop[mid]==shop[mid+1])
        {
            while(shop[mid]==shop[mid+1])
                mid++;
            return mid+1;
        }
        if(shop[mid]<x)
            low = mid+1;

        else up = mid-1;

        mid = (low+up)/2;
    }

    return 0;
}

int main()
{
    int i,q, m, mx=0;

    cin>>n;

    for(i=0; i<n; i++)
    {
        scanf("%d",&shop[i]);
        mx = max(mx, shop[i]);
    }


    sort(shop, shop+n);

    cin>>q;

    for(i=0; i<q; i++)
    {
        scanf("%d",&m);

        if(m>=mx)
            printf("%d\n",n);
        else printf("%d\n",binary(m));
    }

    return 0;
}

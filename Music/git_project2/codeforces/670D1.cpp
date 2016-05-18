#include <bits/stdc++.h>  
  
using namespace std;  
const int MAX = 1e3 + 5;  
//int a[MAX], b[MAX], c[MAX];  
struct NODE  
{  
    int a, b, c;  
}node[MAX];  
int sum[MAX];  
bool comp(NODE a, NODE b)  
{  
    return a.c < b.c;  
}  
  
const int INF = 0x3f3f3f;  
int main()  
{  
    int n, k;  
    scanf("%d%d", &n, &k);  
    int tot = 0;  
    for (int i = 0; i < n; ++i)  
    {  
        scanf("%d", &node[i].a);  
    //  tot += node[i].a;  
    }  
    for (int i = 0; i < n; ++i)  
    {  
        scanf("%d", &node[i].b);  
        //k += node[i].b;  
    }  
    //int smallest = INF;  
    for (int i = 0; i < n; ++i)  
    {  
        node[i].c = node[i].b / node[i].a;  
        //if (smallest > c[i])  
        //  smallest = c[i];  
    }  
    sort(node, node + n, comp);  
    sum[0] = node[0].a;  
    for (int i = 1; i < n; ++i)  
    {  
        sum[i] = sum[i - 1] + node[i].a;  
    }  
    //for (int i = 0; i < n; ++i)  
    //  cout << node[i].c << endl;  
    int i = 0;   
    int res = node[0].c;  
    while (i <= n - 1 && k > 0)  
    {     
        //cout << k << endl;  
        k += (node[i].b % node[i].a);  
        //cout << "ss" << k << endl;  
        if (k >= (sum[i]* (node[i + 1].c - node[i].c)) && node[i + 1].c != 0 && node[i + 1].c > node[i].c)  
            {  
                k -= (sum[i] * (node[i + 1].c - node[i].c));   
                res += node[i + 1].c - node[i].c;  
                //cout << "k = " << k << endl;  
            }  
        else if (k < (sum[i]* (node[i + 1].c - node[i].c)) && node[i + 1].c != 0 && node[i + 1].c > node[i].c)  
        {  
            //if (node[i + 1].c > node[i].c)  
            //{  
                res += k / (sum[i]);  
            break;  
            //}  
        }  
        else if (node[i + 1].a == 0)  
        {  
            res += k / (sum[i]);  
            //cout << "here" << endl;  
            break;  
        }  
        //else  
        //  break;  
        i++;  
        //cout << "res" << res << endl;  
    }  
    cout << res << endl;  
    return 0;  
}  

#include <cstdio>

int main(){

    int numDays(0), totalTime(0); scanf("%d %d", &numDays, &totalTime);
    int *minTime   = new int[numDays];
    int *maxTime   = new int[numDays];
    int *studyTime = new int[numDays];

    int totalMinTime(0), totalMaxTime(0);
    for(int k = 0; k < numDays; k++){
        scanf("%d %d", minTime + k, maxTime + k);
        totalMinTime += minTime[k];
        totalMaxTime += maxTime[k];
    }

    if(totalMinTime <= totalTime && totalTime <= totalMaxTime){
        for(int k = 0; k < numDays; k++){studyTime[k] = minTime[k]; totalTime -= minTime[k];}
        for(int k = 0; k < numDays; k++){
            if(maxTime[k] - minTime[k] < totalTime){studyTime[k] = maxTime[k]; totalTime -= (maxTime[k] - minTime[k]);}
            else{studyTime[k] += totalTime; break;}
        }

        puts("YES");
        for(int k = 0; k < numDays; k++){printf("%d ",studyTime[k]);}
        printf("\n");
    }
    else{puts("NO");}
    
    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	int temp1,temp2,i,d,sumTime,a[30];
	cin>>d>>sumTime;
	for(i=0;i<d;i++)
	{
		cin>>temp1>>temp2;
		if(sumTime >= temp2)
		{
			sumTime -= temp2;
			a[i] = temp2;
		}
		else if (sumTime >= temp1 && sumTime< temp2)
		{
			a[i] = sumTime;
			sumTime = 0;
		}
	}
	if(sumTime!=0)
	cout<<"NO"<<endl;
	else
	{
		
	cout<<"YES"<<endl;
	for(i=0;i<d;i++)
	cout<<a[i]<<" ";
	}	
	return 0;
	
}*/

#include<stdio.h>
long det(int[][10], int);

int main()
{
	int array[10][10],i,j,n;
	long d;
	scanf("%d",&n);
	for(i=0;i<n;++i)
	for(j=0;j<n;++j)
		scanf(" %d",&array[i][j]);
	
	d = det(array,n);
	printf("\nDeterminant of array is: %ld",d);
}

long det(int arr[][10],int n)
{
	if(n==1)
		return arr[0][0];
	if(n==2)
		return arr[0][0]*arr[1][1] - arr[0][1]*arr[1][0];
	
	int i,j,k,a,b,sub[10][10];
	long sum=0,add=0;
	
	for(k=0;k<n;++k)
	{
		for(i=1;i<n;++i)
		for(j=0,b=0;j<n;++j,++b)
		{
			a = i-1;
			if(j == k)
			{
				b--;
				continue;
			}
			sub[a][b] = arr[i][j];
		}
		add = 0;
		if(k%2 == 0)
			add += arr[0][k]*det(sub,n-1);
		else
			add -= arr[0][k]*det(sub,n-1);
		sum += add;
	}
	return sum;
}


#include<bits\stdc++.h>
using namespace std;
struct Point{
	int x, y;
	bool check;
};
Point P[1005];
int main(){
	int n, x, y;
	scanf("%d%d%d", &n, &x, &y);
	for (int i = 0; i < n; i++)
		scanf("%d%d", &P[i].x, &P[i].y), P[i].check = false;
	int ans = 0;
	for (int i = 0; i < n; i++){
		if (P[i].check)	continue;
		ans++;
		for (int j = 0; j < n; j++){
			if (P[j].check || i == j)	continue;
			if ((P[i].x - x)*(P[j].y - y) == (P[j].x - x)*(P[i].y - y))
				P[j].check = true;
		}
	}
	printf("%d\n", ans);
	return 0;
}

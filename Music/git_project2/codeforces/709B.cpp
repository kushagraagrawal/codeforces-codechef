#include <bits/stdc++.h>

using namespace std;

int main() {
	map <long long, long long> mp;
	long long n, s;
	cin >> n >> s;
	long long a[n];
	for(int i=0; i<n; i++) {
		cin >> a[i];
		mp[a[i]]++;
	}
	sort(a, a+n);
	if(n == 1) { cout << 0 << endl; return 0; }
	else if(n == 2) {cout << min(abs(s - a[0]), abs(s - a[1])) << endl; return 0;}
	if(s <= a[0]) {cout << a[n-2] - s << endl; return 0;}
	else if(s >= a[n-1]) {cout << s - a[1] << endl; return 0;}
	else {
		if(mp[a[0]] > 1 && mp[a[n-1]] > 1) {
			cout << a[n-1] - a[0] + min(a[n-1] - s, s - a[0]) << endl;  return 0;
		}
		else if(mp[a[0]] > 1) {
			if(s >= a[n-2]){ cout << s - a[0] << endl;  return 0;}
			else{ cout << a[n-2] - a[0] + min(a[n-2] - s, s - a[0]) << endl; return 0;}
		}
		else if(mp[a[n-1]] > 1) { // 
			if(s <= a[1]) {cout << a[n-1] - s << endl; return 0;}
			else {cout << a[n-1] - a[1] + min(a[n-1] - s, s - a[1]) << endl; return 0;}
		}
		else {
			if(n == 2) {
				cout << min(abs(s - a[0]), abs(s - a[1])) << endl; return 0;
			}
			else if(s <= a[1]){ cout << min(a[n-1] - s, min(2*(s - a[0]) + a[n-2] - s, 2*(a[n-2] - s) + s - a[0])) << endl; return 0;}
			else if(s >= a[n-2]){ cout << min(s - a[0], min( 2*(a[n-1] - s) + s - a[1], 2*(s - a[1]) + a[n-1] - s )) << endl; return 0;}
			else {
				long long ans[4];
				ans[0] = 2*(a[n-1] - s) + (s - a[1]);
				ans[1] = 2*(a[n-2] - s) + (s - a[0]);
				ans[2] = 2*(s - a[0]) + (a[n-2] - s);
				ans[3] = 2*(s - a[1]) + (a[n-1] - s);
				sort(ans, ans+4);
				cout << ans[0] << endl; return 0;
			}
		}
	}
	return 0;
}

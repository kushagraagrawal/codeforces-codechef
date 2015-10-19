#include <cstdio>
#include <algorithm>
#include<iostream>
using namespace std;

const int N = 3000;
int arr[N];

int main() {
  int n;
  cin>>n;

  for (int i = 0; i < n; ++i) {
   cin>>arr[i];
  }

  std::sort(arr, arr + n);
  int coins = 0;

  for (int i = 1; i < n; ++i) {
    while (arr[i - 1] >= arr[i]) {
      ++arr[i], ++coins;
    }
  }

  cout<<coins;
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, L, R ;
	cin >> n >> L >> R ;
	int arr[10005] ;
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i] ;
	}
	int cnt = 0 ;
	for (int i = 0 ; i < n ; i++) {
		if (arr[i] <= R && arr[i] >= L)
			cnt++;
	}
	cout << cnt << endl;

	return 0;
}

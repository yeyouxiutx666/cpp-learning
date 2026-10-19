#include <bits/stdc++.h>
using namespace std;

int main() {
	int n ;
	cin >> n ;
	int arr[1005];
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i] ;
	}
	int num = 0 ;
	int k ;
	cin >> k ;
	for (int i = 0 ; i < n ; i++) {
		if (arr[i] % 10 == k ) {
			num += arr[i];
		}
	}
	cout << num << endl;

	return 0;
}

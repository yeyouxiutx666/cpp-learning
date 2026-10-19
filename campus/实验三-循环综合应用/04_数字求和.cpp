#include <bits/stdc++.h>
using namespace std;

int main() {
	int a ;
	cin >> a ;
	int arr[5] ;
	for (int i = 0 ; i < 5 ; i++) {
		cin >> arr[i] ;
	}
	int res = 0 ;
	for (int i = 0 ; i < 5 ; i++) {
		if (arr[i] < a)
			res += arr[i] ;
	}
	cout << res << endl;

	return 0;
}

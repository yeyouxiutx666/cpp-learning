#include <bits/stdc++.h>
using namespace std;

int main() {
	int a ;
	cin >> a ;
	int arr[105] ;
	for (int i = 0 ; i < a ; i++) {
		cin >> arr[i] ;
	}
	int cnt = 0 ;
	for (int i = 0 ; i < a ; i++) {
		if (arr[i] >= 85)
			cnt++ ;
	}
	cout << cnt << endl;

	return 0;
}

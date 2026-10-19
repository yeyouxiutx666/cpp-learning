#include <bits/stdc++.h>
using namespace std;

int main() {
	int n ;
	cin >> n ;
	int arr[105];
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i] ;
	}
	for (int i = 0 ; i < n ; i++) {
		bool flag = false ;
		for (int j = 0 ; j < i ; j++) {
			if (arr[i] > arr[j]) {
				flag = true ;
				break;
			}
		}
		if (!flag)
			cout << "N" << endl;
		else
			cout << "Y" << endl;
	}

	return 0;
}

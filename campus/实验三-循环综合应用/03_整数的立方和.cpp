#include <bits/stdc++.h>
using namespace std;

int main() {
	int k ;
	cin >> k ;
	int res = 0 ;
	for (int i = 1 ; i <= k ; i++) {
		res += i * i * i ;
	}
	cout << res << endl;

	return 0;
}

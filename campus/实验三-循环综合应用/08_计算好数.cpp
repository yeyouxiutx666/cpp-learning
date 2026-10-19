#include <bits/stdc++.h>
using namespace std;

bool ifnum (int num) {
	int cnt1 = 0 ;
	int cnt0 = 0 ;
	while (num > 0) {
		if (num % 2 == 1)
			cnt1++ ;
		else
			cnt0++;
		num /= 2 ;
	}
	if (cnt1 > cnt0)
		return true ;
	else
		return false ;
}

int main() {
	int n ;
	cin >> n ;
	int cnt = 0 ;
	for (int i = 1 ; i <= n ; i++) {
		if (ifnum(i))
			cnt++ ;
	}
	cout << cnt << endl;

	return 0;
}

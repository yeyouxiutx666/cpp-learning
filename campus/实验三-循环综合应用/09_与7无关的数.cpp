#include <bits/stdc++.h>
using namespace std;

bool ifnum (int num) {
	string s = to_string (num);
	for (int i = 0 ; i < s.length() ; i++) {
		if (s[i] == '7')
			return true ;
	}
	return false ;
}

int main() {
	int n ;
	cin >> n ;
	int cnt = 0 ;
	for (int i = 1 ; i <= n ; i++) {
		if (!ifnum(i) && i % 7 != 0)
			cnt += i * i ;
	}
	cout << cnt << endl;

	return 0;
}

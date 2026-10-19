#include <bits/stdc++.h>
using namespace std;

bool isyear(int years) {
	string s = to_string(years) ;
	int number = 0 ;
	for (int i = 0 ; i < s.length() ; i++) {
		number += s[i] - '0' ;
	}
	if (number == 20)
		return true;
	else
		return false;
}

int main() {
	int year ;
	cin >> year ;
	for (int i = year + 1 ; i <= 9029 ; i++) {
		if (isyear(i)) {
			cout << i << endl;
			break ;
		}

	}

	return 0;
}

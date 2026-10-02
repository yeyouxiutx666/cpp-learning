#include <iostream>
#include <string>
using namespace std;



int main()
{	
	string num ;
	
	cin >> num ;
	
	int res = 0 ;
	
	for (char  n : num)
	{
		int number = n - '0' ;
		res += number ;
	}
	
	cout << res ;
	
	return 0 ;
}

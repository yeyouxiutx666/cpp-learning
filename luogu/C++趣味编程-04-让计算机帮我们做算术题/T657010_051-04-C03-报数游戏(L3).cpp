#include <iostream>

using namespace std;



int main()
{	
	int n ;
	cin >> n ;
	
	
	if (n<=8)
	{
		cout << n ;
	}
	else if (n%8==0)
	{
		cout << "8" ;
	}
	else
	{
		cout << n%8 ;
	}
	return 0 ;
}

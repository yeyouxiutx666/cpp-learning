#include <iostream>

using namespace std;



int main()
{	
	int n1 = 3 ;
	int n2 ;
	
	n2 = n1++ ;
	cout << n1 << " " << n2 <<endl ;
	
	n1 = 3 ;
	n2 = ++n1 ;
	cout << n1 << " " << n2 ;
	
	return 0 ;
}

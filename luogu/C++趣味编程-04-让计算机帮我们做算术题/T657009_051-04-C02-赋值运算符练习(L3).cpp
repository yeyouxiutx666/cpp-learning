#include <iostream>

using namespace std;



int main()
{	
	int a , b , c , d , e ;
	
	a = b = c = d = e = 2+3*5 ;
	
	a += 2 ; b -= 3 ; c = c * (2+3) ; d = d / 3 ; e = e % 5 ;
	
	cout << a << endl << b << endl << c << endl << d << endl << e ;
	
	return 0 ;
}

#include <iostream>
#include <cmath>

using namespace std;



int main()
{	
	
	int a ,b ;
	
	cin >>  a >> b ;
	
	int x , y ;
	
	x = (int)pow(a,2)-(int)pow(b,2) ;
	y = (a+b)*(a-b);
	
	cout << x <<"\n" << y ;
	
	
	return 0 ;
}

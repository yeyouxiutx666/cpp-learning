#include <iostream>

using namespace std;



int main()
{	
	int num ;
	int b,s,g;
	
	cin >> num ;
	
	b = num /100 ; s = (num-100*b)/10 ; g = (num - b*100-s*10) ;
	
	cout << g*100+s*10+b ;
	
	return 0 ;
}

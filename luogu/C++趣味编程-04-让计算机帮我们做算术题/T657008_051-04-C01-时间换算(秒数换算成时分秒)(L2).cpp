#include <iostream>

using namespace std;



int main()
{	
	int time ;
	
	cin >> time ;
	
	cout << time/3600;
	
	cout << " " ;
	
	cout << (time - time/3600*3600)/60 ;
	
	cout << " " ;
	
	cout << time - time/3600*3600 - (time - time/3600*3600)/60*60 ;
	
	return 0 ;
}

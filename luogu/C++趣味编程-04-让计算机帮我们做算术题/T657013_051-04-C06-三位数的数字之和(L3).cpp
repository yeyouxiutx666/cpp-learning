#include <iostream>

using namespace std;



int main()
{	
	int x ;
	cin >> x ;
	
	int bai,shi,ge ;
	
	bai = x/100 ;
	shi = (x-x/100*100)/10 ;
	ge = x - bai*100-shi*10 ;
	
	int num = ge + shi + bai ;
	
	cout << num ;
	
	return 0 ;
}

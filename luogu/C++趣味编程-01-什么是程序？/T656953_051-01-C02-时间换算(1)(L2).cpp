#include <iostream>
using namespace std;

int main()
{
	int time_h = 2;
	int time_m = 16;
	int time_s =21;
	
	int time = 0;
	
	time = time_s + 60*time_m + 60*60*time_h;
	
	cout << time <<" seconds";
	
	return 0 ;
}

#include <iostream>
using namespace std;



int main()
{	
	
	int h,m,s;
	int time = 0;
	
	cin >> h >> m >> s;
	time = h*60*60+m*60+s;
	cout << time;
	
	
	return 0 ;
}

#include <bits/stdc++.h>
using namespace std;



int main()
{	
	double d ;
	
	cin >> d ;
	
	if ( d - (int)(d) >= 0.5 )
	{
		cout << (int)(d) + 1 ;
	}
	else 
	{
		cout << (int)(d) ;
	}
	
	return 0 ;
}

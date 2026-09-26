#include <bits/stdc++.h>
using namespace std;
int main( )
{
    int n = 0 ;
    cin >> n ;
    int arr[n] ;
    for (int i = 0 ; i < n ;i++)
    {
    	cin >> arr[i] ;
	}
	cout << "你输入的原数组为" << endl;
	for (int i = 0 ; i < n ; i++)
    {
    	cout << arr[i] << " " ;
	}
	
	for (int j = 0 ; j < n-1 ; j++)
	{
		for (int i = 0 ; i < n-1-j; i++)
     	{
	    	if (arr[i]>=arr[i+1])
	    	{
		    	int tempi = arr[i] ;
			    arr[i] = arr[i+1];
		    	arr[i+1] = tempi ;
		    }
     	}
	}
	cout << endl ;
    cout << "按从小到大排序后的数组为" << endl;
    for (int i = 0 ; i < n ; i++)
    {
    	cout << arr[i] << " " ;
	}
    return 0;
}

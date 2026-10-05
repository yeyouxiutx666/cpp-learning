#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10];
    for (int i = 0 ; i < 10 ; i++)
     {
        cin >> arr[i] ;
     }
    for (int i = 0 ; i < 10 ; i++)
     {
        for (int j = 0 ; j < 10 - 1 - i ; j++)
         {
            
            if (arr[j] > arr[j+1])
             {
                int temp = arr[j+1] ;
                arr[j+1] = arr[j] ;
                arr[j] = temp ;
             }
         }
     }
    /*for (int i = 0 ; i < 10 ; i++)
     {
        cout << arr[i] << " " ;
     }
    */
    int grade = 0 ;
    for (int i = 1 ; i < 10 - 1 ; i++)
     {
        grade += arr[i] ;
     } 
    cout << fixed << setprecision(3) << (double)(grade)/(10 - 2) ;

    return 0;
    
}

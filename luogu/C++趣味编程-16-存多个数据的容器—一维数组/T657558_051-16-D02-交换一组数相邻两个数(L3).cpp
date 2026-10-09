#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int arr[10] ;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for (int i = 0 ; i < 9 ; i+=2)
    {
        swap(arr[i],arr[i+1]);
    }
    for (int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

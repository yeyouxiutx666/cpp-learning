#include<iostream>
using namespace std;

int main()
{
    int y=60*12;
    int x=180*9;
    int m=0;
    
    if (y>x)
    {
    m=y-x;
    }
    else
    {
    m=x-y;
    }
    
    cout <<m<<" meters";
    
    
    return 0;
}

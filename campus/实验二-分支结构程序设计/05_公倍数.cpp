#include <iostream>

using namespace std;

int main ()

{

    int n ; 

    int a , b , c ;

    cin >> n >> a >> b >> c ;

    if (n%a==0&&n%b==0&&n%c==0) cout <<"yes" << endl;

    else cout << "no" << endl;

    

    return 0;

}


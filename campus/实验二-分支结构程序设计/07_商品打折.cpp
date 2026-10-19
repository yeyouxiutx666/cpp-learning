#include <iostream>

#include <iomanip>

using namespace std;

int main ()

{

    double p ; int num ;

    cout << fixed << setprecision(2);

    // 增加输入，给变量赋值

    cin >> p >> num;

    switch (num)

    {

        case 1 : 

            cout << p*num << endl;

            break ;

        case 2 : 

            cout << p*0.9*num << endl;

            break;

        default : 

            cout << p*0.8*num << endl;

    }

    

    return 0;

}




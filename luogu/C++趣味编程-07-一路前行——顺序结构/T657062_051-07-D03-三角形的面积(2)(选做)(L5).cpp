#include <bits/stdc++.h>
using namespace std;

struct Point
{
    double x , y ;
};

int main()
{
    double x1 , y1 , x2 , y2 , x3 , y3 ;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 ;
    Point p1 = {x1 , y1} , p2 = {x2 , y2} , p3 = {x3 , y3} ;
    //向量叉乘求面积
    double area = fabs((p2.x - p1.x) * (p3.y - p1.y) - (p3.x - p1.x) * (p2.y - p1.y)) / 2.0 ;
    cout << fixed << setprecision (2) << area << endl ;

    return 0;
}

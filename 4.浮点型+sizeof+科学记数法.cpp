#include <iostream>
using namespace std;
int main ()
{
    float a = 3.14f;
    cout << "a=" <<a<<  "  "<< sizeof(float)<<endl;
    double b = 4.26;
    cout << "b="<< b << "  "<<sizeof(double)<<endl;
    float c = 3e2;
    cout <<"c="<<c<<endl;
    float d = 3e-2;
    cout <<"d="<<d<<endl;
    //3e2  表示科学记数法  3*10^2   -2表示10^-2
}
#include <iostream> 
using namespace std;
int main()
{
    cout <<10 % 3 <<endl;
    int a = 10;
    int b = 20;
    cout << a / b <<endl;
    float c = 0.5;
    float d = 0.25;
    cout << c / d <<endl;
    a++;
    cout <<" a++ = "<<a<<endl;
    int e = 10;
    int f = e++;
    cout << "e="<<e<<endl;
    cout <<"f="<<f << endl;
    int g = ++f;
    cout <<"f="<<f << endl;
    cout <<"g="<<g<<endl;
}
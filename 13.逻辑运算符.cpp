#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    cout << !a <<endl;
    cout << !!a <<endl;
    int b = 10;
    cout <<"此时a="<<a<<"\tb="<<b<<endl;
    cout << (a && b) << endl;
    b = 0;
    cout <<"此时a="<<a<<"\tb="<<b<<endl;
    cout << (a && b) << endl;
    cout << (a || b) << endl;
    a = 0;

    cout <<"此时a="<<a<<"\t\tb="<<b<<endl;
    cout << (a || b) << endl;
}
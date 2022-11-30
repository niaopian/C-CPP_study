#include <iostream>
using namespace std;
#include <string>
int main()
{
    char str1[] = "hello";
    cout << str1 <<endl;
    string str2 = "hello world";
    cout << str2 <<endl;
    cout <<sizeof(str1)<<"  "<<sizeof(str2)<<endl;
}
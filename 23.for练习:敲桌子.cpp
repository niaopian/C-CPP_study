#include <iostream>
using namespace std;
int main()
{
    for (int a = 0; a < 101; a++)
    {
        if (a%7==0 || a / 10==7 || 7 == a%10)
        {
            cout <<"敲桌子"<<endl;
        }
        else
        {
            cout <<a<<endl;
        }
    }
    
}


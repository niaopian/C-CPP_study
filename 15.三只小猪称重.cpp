#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    cout <<"请输入小猪A的体重__kg"<<endl;
    cin >>a;
    cout <<"请输入小猪B的体重__kg"<<endl;
    cin >>b;
    cout <<"请输入小猪C的体重__kg"<<endl;
    cin >>c;
    if (a>b)
    {
        if (a>c)
        {
            cout <<"小猪A最重"<<endl;
        }
        else
        {
            cout <<"小猪C最重"<<endl;
        }
    }
    else
    {
        if(b>c)
        {
            cout <<"小猪B最重"<<endl;
        }
        else
        {
            cout <<"小猪C最重"<<endl;
        }
    }
}
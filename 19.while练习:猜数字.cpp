#include <iostream>
using namespace std;
#include <ctime>
int main()
{
    srand ((unsigned int)time(NULL));
    int a = rand()%100 + 1;
    int b = 0;
    cout <<"请猜一个0~100的数字"<<endl;
    while (1)
    {
        cin>>b;
        if (a<b)
        {
            cout <<"你猜的数字过大,请重新输入:"<<endl;
        }
        else if (a>b)
        {
            cout <<"你猜的数字过小,请重新输入:"<<endl;
        }
        else
        {
            cout <<"恭喜你你猜对了"<<endl;
            break;
        }
    }
}
#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    cout <<"请输入分数"<<endl;
    cin >> a;
    switch (a)
    {
    case 10:
        cout <<"666"<<endl;
        break;
    case 9:
        cout <<"优秀"<<endl;
        break;
    case 8:
        cout <<"良好"<<endl;
        break;
    case 7:
        cout <<"及格"<<endl;
        break;
    default:
        cout <<"不及格"<<endl;
        break;
    }
}
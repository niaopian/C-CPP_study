#include <iostream>
using namespace std;
int main()
{
    cout <<"关于身高对结交异性的难易程度的影响"<<endl;
    int a = 0;
    cout <<"请输入您从头到脚的高度: ";
    cin >> a ;
    cout <<"您的身高居然是"<<a<<"!!"<<endl;
    if (a>=170)
    {
        cout <<"你比较容易受女孩子欢迎"<<endl;
        if (a>=180)
        {
            cout <<"你的身高高过1米8,是理想身高"<<endl;
        }
        else if(a >=175)
        {
            cout <<"你离1米8差一点"<<endl;
        }
        else 
        {
            cout <<"你的身高还行"<<endl;
        }
    }
    else if ( a>= 160)
    {
        cout <<"你的身高还看得过去"<<endl;
        if (a>=165)
        {
            cout <<"你差一点就到1米7啦"<<endl;
        }
        else
        {
            cout <<"你还有点难度"<<endl;
        }
    }
    else
    {
        cout <<"你可能很困难"<<endl;
    }
    return 0;
}
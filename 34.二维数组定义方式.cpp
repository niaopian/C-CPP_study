#include <iostream>
using namespace std;
int main()
{
    short arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    for (short i = 0; i < 3; i++)
    {
        for (short j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

}
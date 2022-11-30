#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;
    cout <<arr[2]<<endl;
    
    int arr2[3]={10,20};
    cout <<arr2[2]<<endl;
    
    int arr3[]={10,20};
    for (int i = 0; i < 4; i++)
    {
        cout <<arr3[i]<<endl;
    }
    

}
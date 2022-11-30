#include <iostream>
using namespace std;
int main()
{
    int arr[]={4,2,8,0,5,7,1,3,9};
    for (int i = 0; i < 9; i++)
    {
        for (int b = 0; b < 9; b++)
        {
            if (arr[b]>arr[b+1])
            {
                int temp = arr[b];
                arr[b] = arr[b+1];
                arr[b+1] = temp;
            }
            
        }
        
    }
    for (int i = 0; i < 9; i++)
    {
        cout <<arr[i]<<"  ";
    }
}
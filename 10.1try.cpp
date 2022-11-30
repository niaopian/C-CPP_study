#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[4][n];
    for(int j=0;j<4;j++)
    {
        for (int k = 0; k < n; k++)
        {
            cin>>arr[j][k];
        }
    }
    for (short j = 1; j < 4; j+=2)
    {
        for (short l = 0; l < n; l++)
        {
            if (arr[j][l]!=0)
            {
                if (arr[j][l]>60)
                {
                    arr[j-1][l]=60;
                }
                else
                {
                    arr[j-1][l]=(arr[j-1][l]>arr[j][l]?arr[j-1][l]:arr[j][l]);
                }
            }
        }
    }
    short a,b;
    for (short l = 0; l < n; l++)
    {
        a+=arr[0][l];
    }
    for (short l = 0; l < n; l++)
    {
        b+=arr[2][l];
    }
    if (a>b)
    {
        cout<<"Lily is winner!";
    }
    else if (a<b)
    {
        cout<<"Tom is winner!";
    }
    else
    {
        cout<<"Happy ending!";
    }
}
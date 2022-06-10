#include <iostream>

 

using namespace std;

 

int main ()
{
    int arr [4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

 

    for (int i = 0; i<4 ; i++)
    {
        for (int j =0 ; j<4 ; j++)
        {
            cout<<arr[i][j]<<'\t';
        }
        cout<<endl;
    }

 

    int arr2 [4][4] = {{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
    cout<<endl<<endl;

 

    for (int i = 0; i<4 ; i++)
    {
        for (int j =0 ; j<4 ; j++)
        {
            cout<<arr2[i][j]<<'\t';
        }
        cout<<endl;
    }

 

    cout<<endl<<endl;

 

       for (int i = 0; i<4 ; i++)
    {
        for (int j =0 ; j<4 ; j++)
        {
            cout<<arr[i][j]+arr2[i][j]<<'\t';
        }
        cout<<endl;
    }

 

        cout<<endl<<endl;

 

       for (int i = 0; i<4 ; i++)
    {
        for (int j =0 ; j<4 ; j++)
        {
            cout<<arr[j][i]+arr2[j][i]<<'\t';
        }
        cout<<endl;
    }
}
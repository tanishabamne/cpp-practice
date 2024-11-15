#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    cout<<"Enter digits"<<endl;
    for(int i=0;i<3;i++)              //these two nested loop for input
    {
        for( int j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }

    }

    for(int i=0;i<3;i++)               //these two nested loop for output
    {
        for( int j=0; j<3; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}

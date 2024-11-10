#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int sum=0;
    cout<<"Enter 5 numbers of array"<<endl;
    for( int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for( int i=0;i<5;i++)
    {
        cout<<arr[i]<<"\t";
        sum +=arr[i];                           // sum =sum +arr[i];
    }

    cout<<endl<<"sum of array elements"<<" "<<sum<<endl;
}

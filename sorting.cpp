#include<iostream>
using namespace std;
int main()
{
    int arr[5]={5,1,2,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int cmp=0;
    for(int i=0;i<size-1;i++) //pass
    {
        for(int j=0;j<i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                cmp++;
            }
        }
    }
    for(int k=0;k<size;k++){
        cout<<arr[k]<<"\t";
    }
    cout<<endl;
    cout<< "compare"<<cmp<<"times"<<endl;

}

#include<iostream>
using namespace std;
int main()
{   //  find size of array
    int arr[5]={-2,10,6,-8,20};
    int size=sizeof(arr)/sizeof(arr[0]);
    int pos=0;
    int neg=0;
    for (int i=0;i<size;i++){
        if(arr[i]<0){
            neg++;
        }
        else{
            pos++;
        }
    }

    cout<<"positive:"<<"\t"<<pos<<endl;
    cout<<"negative:"<<"\t"<<neg<<endl;


}

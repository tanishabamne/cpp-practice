#include<iostream>
using namespace std;
int main()
{
    int arr[5]={5,1,8,3,4};
    int min =arr[0];
    int sum=0;
    int sum1=0;
    for(int i=0;i<5;i++)
    {
     if(arr[i]%2==0)
     {
         sum=sum+arr[i];
     }
     else{
        sum1=sum1+arr[1];
     }
    }
    cout<<"Even Sum"<<"\t"<<sum<<endl;
    cout<<"odd Sum"<<"\t"<<sum<<endl;

}

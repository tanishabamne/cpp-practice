#include<iostream>
using namespace std;
int main()
{
    int arr[5]={5,1,8,3,4};
    //i= iteration= repetation
    int even=0;
    int odd=0;
    for(int i=0;i<5;i++){
     if(arr[i]%2==0){
        even++;
     }
     else{
        odd++;
     }
    }

    cout<<"Even"<<"\t"<<even<<endl;
    cout<<"odd"<<"\t"<<odd<<endl;

}

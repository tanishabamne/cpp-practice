#include<iostream>
using namespace std;
int main()
{
    int num,last,sum=0;
    cout<<"enter any number";
    cin>>num;
    while(num<=0){
    last=num%10;
    sum=sum(last*last*last);
    num=num/10
    cout<<sum;
    }


}

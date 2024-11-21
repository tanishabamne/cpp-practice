#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter 3 digit number"<<endl;
    cin>>num;
    if(num >=100&& num <=999)
    {
        int h=num/100;
        int t=(num-h*100)/10;
        int o=num-(h*100+t*10);
        cout<<h<<"is hundred place"<<endl;
        cout<<t<<"is tens place "<<endl;
        cout<<o<<"is ones place"<<endl;
    }
    else{
        cout<<"Invalid input";
    }

}

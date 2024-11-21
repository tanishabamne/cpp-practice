#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter three digits: ";
    cin>>num1>>num2>>num3;
    if( num1>= num2)
    {
        cout<<num1<<"is greatest";
    }
    else if( num2>=num3)
    {
        cout<<num2<<"is greatest";
    }
    else if( num3>=num1)
        {
            cout<<num3<<"is greatest";
        }
        else
            {
            cout<<" wrong input";
            }

}

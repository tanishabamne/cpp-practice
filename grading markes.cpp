#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your marks"<<endl;
    cin>>marks;
    if( marks<=0&&marks<500)

    if(marks>=35&&marks<45){
        cout<<"Grade C"<<endl;
    }
     else if( marks>=45&&marks<60){
        cout<<"Grade B"<<endl;
    }
     else if(marks>=60&& marks<100){
        cout<<"Grade A"<<endl;
    }
    else{
        cout<<"Fail";
    }

}

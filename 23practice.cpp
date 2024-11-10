#include<iostream>
using namespace std;
int main()
{
//    for(int i=1; i<=4; i++){
//        for(int j=1; j<=3; j++){
//            cout                     rectangle pattern
//        }
//        cout<<endl;

//    }
    for( int i=1; i<=9; i++){
        for( int j=1; j<=9; j++){
                if(i==5||j==5)
            cout<<"+";

        else( cout<<" ");            // Plus patteren
    }
        cout<<endl;
    }

}

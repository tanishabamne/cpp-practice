#include<iostream>
using namespace std;
int main (){
for( int i=1;i<=4;i++){//outer loop

    cout<<"set number:"<<i<<endl;
    for( int j=1;j<=20;j++) //inner loop
        cout<<"Repetation:"<<j<<endl;
}
//for every iteration of outer loop,
//inner loop get completely execute.
}

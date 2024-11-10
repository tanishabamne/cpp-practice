#include<iostream>
using namespace std;
int main(){

int star=1;
for( int i=5; i>=1;i--)  { //  i=5
for( int j=1;j<=i;j++){     //space
    cout<<" ";
}
 for( int k=1;k<=star; k++){   //star
    cout<<"*";
 }
 star=star+2;
 cout<<endl;
}
}




#include<iostream>
using namespace std;
int main(){

int star=9;
for( int i=1; i<=9;i--)  {
for( int j=1;j<=i;j--){
    cout<<" ";
}
 for( int k=1;k<=star; k++){
    cout<<"*";
 }
 star=star-2;
 cout<<endl;
}
}

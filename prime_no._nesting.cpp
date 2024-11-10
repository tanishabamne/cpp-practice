#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter lower and upper limit:";
    cin>>n1>>n2;
    for( int num=n1;num<=n2;num++){
        int flag=0;
        for( int i=2;i<num;i++){
            if(num%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<num<<"  ";
        }
    }
}

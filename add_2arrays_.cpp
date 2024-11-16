#include<iostream>
using namespace std;
int main()
{
    char str1[10];
    char str2[10];
    cout<<"Enter 1 and 2 string "<<endl;
    cin>>str1;
    cin>>str2;
    int len=0;
    while(str1[len]!='\0')
    {
//        str2[len]=str1[len];
        len++;
    }
    int ctr=0;
    while(str2[ctr]!='\0'){
        str1[len]=str2[ctr];
        ctr++;
        len++;
    }
    cout<<str1<<endl;
}


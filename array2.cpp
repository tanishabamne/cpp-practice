#include<iostream>
using namespace std;
int main()
{
    char str1[10];
    char str2[10];
    cout<<"Enter string "<<endl;
    cin>>str1;
    int len=0;
    while(str1[len]!='\0')
    {
        str2[len]=str1[len];
        len++;
    }
    cout<<str2<<endl;
}

#include<iostream>
using namespace std;
int main()
{         // WAP to find the length of string
    char str[10];
    cout<<"Enter a string";
    cin>>str;
    char *ch=&str[0];
    int ctr=0;
    while(*ch !='\0')
    {
        ch++;
        ctr++;
    }
    cout<<"Length of string"<<" "<<ctr<<endl;
}

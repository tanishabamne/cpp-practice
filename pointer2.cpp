#include<iostream>
using namespace std;
int main()
{
    char str[10]="hello";
    char str2[10]="world";
    int ctr=0;
    char *ch=&str[0];
    while(*ch!='\0')
    {
        ch++;
        ctr++;
    }
    ch =&str2[0];
    while(*ch!='\0')
    {
        str[ctr]=*ch;
        ch++;
        ctr++;
    }
    cout<<str<<endl;
}

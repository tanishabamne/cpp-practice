#include<iostream>
using namespace std;
int main()
{   char name[20]={'h','e','h','e','\0'};
    int ctr=0;
    char ch=name[0];
    while(ch !='\0')
    {

        cout<<ch<<endl;
        ctr++;
        ch=name[ctr];
    }
}

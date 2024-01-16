//CORRECT WAY OF CHAR OUTPUT
#include <iostream>
using namespace std;
int main()
{
    void *ptr;
    char a='I';
    ptr=&a;
    cout<<"a ="<<a<<endl;
    //cout<<"*ptr = "<<*ptr<<endl;
    cout<<"ptr = "<<ptr<<endl;
    cout<<"*(char*)ptr = "<<*(char*)ptr<<endl;
}
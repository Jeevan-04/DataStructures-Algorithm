//WRONG
//IT SAYS CHAR DOESNT PRINT ADDRESS
#include <iostream>
using namespace std;
int main()
{
    char *ptr;
    char a='I';
    ptr=&a;
    cout<<"a ="<<a<<endl;
    cout<<"*ptr = "<<*ptr<<endl;
    cout<<"ptr = "<<ptr<<endl;
}
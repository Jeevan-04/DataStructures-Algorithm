#include <iostream>
using namespace std;
int main()
{
    int a=5;
    int*ptr1;
    ptr1=&a;
    int**ptr2;
    ptr2=&ptr1;
    cout<<"a = "<<a<<endl;
    cout<<"ptr1 = "<<ptr1<<endl;
    cout<<"*ptr1 = "<<*ptr1<<endl;
    cout<<"ptr2 = "<<ptr2<<endl;
    cout<<"*ptr2 = "<<*ptr2<<endl;
    cout<<"**ptr2 = "<<**ptr2<<endl; //** are necessary to access the original value of the variable 'a'.
}
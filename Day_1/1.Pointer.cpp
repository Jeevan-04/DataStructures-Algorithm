#include <iostream>
using namespace std;
int main()
{
    int a=5;
    int *ptr=NULL;

    ptr=&a;

    cout<<"a = "<<a<<endl;
    cout<<"size of 'a' = "<<sizeof(a)<<endl;
    cout<<"ptr = "<<ptr<<endl;
    cout<<"size of 'ptr' = "<<sizeof(ptr)<<endl;
    cout<<"*ptr = "<<*ptr<<endl;
    cout<<"size of '*ptr' = "<<sizeof(*ptr)<<endl;
    cout<<"&a = "<<&a<<endl;
    cout<<"size of '&a' = "<<sizeof(&a)<<endl;
}
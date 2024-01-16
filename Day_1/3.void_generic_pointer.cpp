#include <iostream>
using namespace std;
int main()
{
    void *ptr;
    int a=5;
    ptr=&a;
    cout<<"a ="<<a<<endl;
    cout<<"*ptr is nt possible 'cause of being void"<<endl;
    cout<<"*(int*)ptr = "<<*(int*)ptr<<endl;
    cout<<"ptr = "<<ptr<<endl;
}
#include <iostream>
using namespace std;
int main()
{
    int a=5;
    int b=6;
    int *ptr1=&a;
    int *ptr2=&b;

    int sum=(*ptr1)+(*ptr2);

    cout<<"sum of "<<a <<" and " << b << " is "<< sum<<endl;

    (*ptr2)++;
    a++;

    cout<<a<<endl;
    cout<<(*ptr2)<<endl;
}
//first increment it thenn print it 
//if you directly print it in cout<< it won't work.
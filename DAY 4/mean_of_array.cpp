#include <iostream>
using namespace std;
int main()
{
    int a;
    float sum=0;
    cout<<"Enter the number of inputs: ";
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++)
    {
        cout<<"Enter the "<< i+1<< " element: ";
        cin>>arr[i];
    }
    int x=0;
    while(x<a)
    {
        sum+=arr[x];
        x=x+1;
    }
    cout<<"Array: ";
    for(int i=0;i<a;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"sum: "<<sum<<endl;
    float mean=sum/a;
    cout<<"Mean: "<<mean<<endl;
    size 
    return 0;
}
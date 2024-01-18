//using struct for the details of the students
#include <iostream>
#include <string>
using namespace std;
struct Students
{
    int roll_no;
    string name;
    string DOB;
};
int main()
{
    int a;
    cout<<"Enter the number of students: ";
    cin>>a;
    Students s[a];
    for(int i=1;i<=a;i++)
    {
        cout<<"Enter the roll no: ";
        cin>>s[i].roll_no;
        cout<<"Enter the name: ";
        cin.ignore();
        getline(cin,s[i].name);
        cout<<"Enter the DOB: ";
        cin>>s[i].DOB;
    }
    for (int i = 1; i <=a; i++)
    {
        cout<<endl<<"student "<<i<<endl;
        cout<<s[i].roll_no<<endl;
        cout<<s[i].name<<endl;
        cout<<s[i].DOB<<endl<<endl;
    }
    return 0;
}
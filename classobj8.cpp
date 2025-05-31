#include<iostream>
using namespace std;
class Employee
{
    public:
     Employee()
     {
        cout<<"default constructor invoked"<<endl;
     }
     ~Employee()
     {
        cout<<"destructor evoked \n";
     }
};
int main(void)
{
    cout<<"in main function \n";
    cout<<"1st obj \n";
    Employee s1;
    cout<<"2nd obj \n";
    Employee s2;
    cout<<"ending main func \n";
    return 0 ;
}
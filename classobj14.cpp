#include<iostream>
#include<string.h>
using namespace std;
class student
{
    private:
    string name;
    int rollnumber;
    public:
    student(string n,int r){
        name=n;
        rollnumber=r;
    }
    void displayInfo()
    {
        cout<<"name :"<<name<<endl;
        cout<<"roll number:"<<rollnumber<<endl;
    }
};
int main(){
string name;
int rollnumber;
cout<<"enter your name:";
getline(cin,name);
cout<<"enter your roll number:";
cin>>rollnumber;
cin.ignore();
student student(name,rollnumber);
cout<<"student info \n";
student.displayInfo() ;
return 0;
}
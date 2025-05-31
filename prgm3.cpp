//marks card
#include<iostream>
using namespace std;
struct Student{
    string name;
    int rollno;
    int marks[3];
};
int main() {
    Student s;
    cout<<"enter student name :";
    cin>>s.name;
    cout<<"enter roll number:";
    cin>>s.rollno;
    int total=0;
    for(int i=0;i<3;i++)
    {
        cout<<"enter marks for subject"<<i+1<<":";
        cin>>s.marks[i];
        total+=s.marks[i];
    }
    float average=(float)total/3;
    cout<<"\n Student name:"<<s.name<<endl;
    cout<<"roll number:"<<s.rollno<<endl;
    for(int i=0;i<3;i++){
        cout<<"subject"<<i+1<<":"<<s.marks[i]<<endl;
    }
    cout<<"total marks:"<<total<<endl;
    cout<<"average marks:"<<average<<endl;
    if(average>=60)
    {
        cout<<"grade:pass"<<endl;
    }
    else{
        cout<<"grade:fail"<<endl;
    }
    return 0;
}
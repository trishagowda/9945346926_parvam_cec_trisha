 #include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    void display(){
        cout<<"name  "<<name<<"  age"<<age<<endl;
    }
};
int main()
{
    person P;
    P.name="aline";
    P.age=25;
    P.display();
    return 0;
}
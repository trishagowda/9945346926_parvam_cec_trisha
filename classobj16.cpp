   #include<iostream>
using namespace std;
class Base{
    protected:
    int value;
    public:
    Base(int v) {
      value=v;
    }
};
class Derived: public Base{
    public:
    Derived(int v):Base(v){}
    void displayValue(){
        cout<<"Value:"<<value<<endl;
    }
    void modifyValue(int newValue){
        value=newValue;
    }
};
int main() {
    int initialValue;
    cout<<"enter the initial value";
    cin>>initialValue;
    int newValue;
Derived d(initialValue);
d.displayValue();
cout<<"enter the new value";
cin>>newValue;

d.modifyValue(newValue);
d.displayValue();
return 0;
}
  #include<iostream>
 using namespace std;
class animal{
    public:
    void eat(){
        cout<<"eating..."<<endl;
    }
};
class dog:public animal
{
    public:
    void bark(){
        cout<<"barking....";
    }
};
class cat:public animal
{
    public:
    void meow  ()
    {
        cout<<"meow meow"<<endl;
    }
};
int main(void){
    dog d1; cat c1; 
    d1.eat();
    d1.bark();
    c1.meow();
    c1.eat();
    return 0;
}
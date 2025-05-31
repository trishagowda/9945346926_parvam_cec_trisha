 #include<iostream>
using namespace std;
class calculator{
    public:
    int add(int a,int b);
    int subtraction(int a,int b);
    int multiply(int a,int b);
    int divide( int a,int b);
};
int calculator::add(int a, int b)
{
    return a+b;

}
int calculator::subtraction(int a, int b)
{
    return a-b;
    
}
int calculator::multiply(int a, int b)
{
    return a*b;
    
}
int calculator::divide(int a, int b)
{
    if(b!=0)
    {
       return a/b;
    
    }
    else{
        cout<<"error dividion by zero"<<endl;
        return 0;
    }
    
}
int main()
{
    calculator calculator;
    int num1=10;
    int num2=2;
    cout<<" addition"<<calculator.add(num1,num2)<<endl;
    cout<<" subtraction"<<calculator.subtraction(num1,num2)<<endl;
    cout<<" multiply"<<calculator.multiply(num1,num2)<<endl;
    cout<<" divide"<<calculator.divide(num1,num2)<<endl;
     return 0;
}
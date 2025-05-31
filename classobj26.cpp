   #include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"entr your age"<<endl;
    cin>>age;
    try
    {
       if(age<16)
       throw(age);
    else
    cout<<"access given";
    }
    catch(int a)
    {
    cout<<"your age is less then 18 ,which is "<<age<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int number10;
    int*p;
    p=&number;
    cout<<"address of  number varaiable is:"<<&number<<endl;
    cout<<"address of  p varaiable is:"<<p<<endl;
    cout<<"value of p varaiable is:"<<*p<<endl;
    return 0;
}
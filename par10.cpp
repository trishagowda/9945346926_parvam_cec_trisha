//length of the string
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"enter a string:";
    getline(cin,str);
    cout<<"length of the string:"<<str.length()<<endl;
    return 0;
}
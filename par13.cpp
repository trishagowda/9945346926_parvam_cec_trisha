 //reversing of a string
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"enter a string:";
    getline(cin,str);
    string reversed=" ";
    for(int i=str.length()-1;i>=0;i--)
    {
        reversed +=str[i];

    }
    cout<<"reversed string:"<<reversed <<endl;
    return 0;
}
 //check after reversing whether the string is palindrome or not
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
        reversed+=str[i];
    }
    cout<<"reversed string:"<<reversed <<endl;
    if(str==reversed){
        cout<<"the string is a palindrome"<<endl;

    }
    else{
        cout<<"the string is not a palindrome"<<endl;
    }
    return 0;
}
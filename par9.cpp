//check whether the function is vowel or not
#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"enter a character:";
    cin>>c;
    c=tolower(c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        cout<<c<<" is a vowel"<<endl;

    }
    else{
        cout<<c<<" is not a vowel"<<endl;
    }
    return 0;
}
 
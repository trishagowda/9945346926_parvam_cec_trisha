//check the length of vowels in a string
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"enter a string:";
    getline(cin,str);
    int count =0;
    for(char c:str){
        switch(tolower(c)){
            case 'a': 
            case 'e': 
            case 'i': 
            case 'o': 
            case 'u':
            count++;
            break;
        }
    }
    cout<<"num of vowels "<<count<<endl;
    return 0;
}

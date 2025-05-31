//binary to decimal
#include<iostream>
using namespace std; 
int main()
{
    int binary,decimal=0,base=1,remainder;
    cout<<"enter the value for binary";
    cin>>binary;
    while (binary>0){
        remainder=binary%10;
        decimal+=remainder*base;
        binary/=10;
        base*=2;
    }
    cout<<"decimal equivalent"<<decimal;
    return 0;
}
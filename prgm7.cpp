//largest of 3 numbers
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the numbers:";
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        cout<<"largest num is :"<<a<<endl;
    }else if(b>=a && b>=c){
        cout<<"largest num is :"<<b<<endl;
    }else{
        cout<<"largest num is :"<<c<<endl;
    }
    return 0;
    
}

//simple interest
#include<iostream>
using namespace std;
int main(){
    int principal;
    float rate,time,interest;
    cout<<"enter principal amount(multiple of 1000): ";
    cin>>principal;
    while(principal % 1000!=0)
    {
        cout<<"invalid principal amount. Please enter a multiple of 1000:";
        cin>>principal;
    }
    cout<<"enter rate of interest(multiple of 1):";
    cin>>rate;
    while(rate!=(int) rate){
        cout<<"invalid rate of interest.Please enter a multiple of 1:";
        cin>>rate;
    }
    cout<<"enter time period(multiple of 1):";
    cin>>time;
    while(time!=(int)time){
       cout<<"invalid time period.Please enter a multiple of 1:";
       cin>>time;  
    }
    interest=(principal*rate*time)/100.0;
    cout<<"simple interest:"<<interest<<endl;
    cout<<"total amount:"<<principal+interest<<endl;
    return 0;
}
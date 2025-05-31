#include<iostream>
using namespace std;
void decimalTobinary(int n){
    if(n==0){
        cout<<"0";
        return;
    }
    int binary[32];
    int i=0;
    while(n>0){
        binary[i++]=n%2;
        n/=2;
    }
    for (int j=i-1;j>=0;j--){
        cout<<binary[j];

    }
}
int main(){
    int decimal;
    cout<<"enter a decimal number:";
    cin>>decimal;
    cout<<"binary representation:";
    decimalTobinary(decimal);
    cout<<endl;
    return 0;
}
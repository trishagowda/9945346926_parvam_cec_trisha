//summation of squares of numbers
#include<iostream>
using namespalude<iosce std;
int main()
{
    int n,sum=0;
       cout<<"enter the number of inputs:";
       cin>>n;
       for(int i=0;i<n;i++){
        int num;
        cout<<"enter number"<<i+1<<":";
        cin>>num;
        sum+=num*num;
       }
       cout<<"sum of squares of the number is:"<<sum<<endl;
       return 0;
    }
#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"enter a number"<<endl;
    cin>>num;
    for(int i=0;i<num;i++)
    {
    if(num%i==0)
    {
        sum+=i;
        num/=1;
    }
    }
if(sum==num)
    {
    cout<<num<<"is a perfect num.."<<endl;
    }
else{
    cout<<num<<"is not a perfect num..";

}
return 0;
}

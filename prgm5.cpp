//factorial of a number
#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;    
}
int main()
{
int num;
cout<<"enter a number:";
cin>>num;
cout<<"factioral of"<<num<<"is:"<<factorial(num)<<endl;
return 0;
}
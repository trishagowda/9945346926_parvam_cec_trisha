//to check whether the num is neon num or not
 #include<iostream>
using namespace std;
bool isNeon(int n){
    int square=n*n;
    int sum=0;
    while (square!=0)
    {
        sum+=square%10;
        square/=10;

    }
    return sum==n;
}
int main()
{
    int num;
    cout<<"enter a num:"<<endl;
    cin>>num;
    if(isNeon(num))
    cout<<num<<"is a neon num.."<<endl;
else{
    cout<<num<<"is not a neon num..";

}
return 0;
}
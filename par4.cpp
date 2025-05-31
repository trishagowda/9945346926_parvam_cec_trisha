 //to check whether the number is prime or not by reversing 
 #include<iostream>
using namespace std;
bool isPrime(int num){
    if(num<=1){
        return false;

    }
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0){
            return false;

        }
    }
    return true;
    
} 
int reverseNumber(int num){
    int reversed =0;
    while(num!=0)
    {
        reversed=reversed*10+num%10;
        num/=10;

    }
    return reversed;
}
int main(){
    int num;
    std::cout<<"enter a number:";
    std::cin>>num;
    if(isPrime(num))
    {
        std::cout<<num<<"is a prime number"<<std::endl;

    }
    else{
        std::cout<<num<<"is not a prime number"<<std::endl;
    }
    int reversed=reverseNumber(num);
    std::cout<<"reversed number:"<<reversed<<std::endl;
    return 0;
}
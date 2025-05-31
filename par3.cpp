 //to check whether the number is prime or not
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
    return 0;
}
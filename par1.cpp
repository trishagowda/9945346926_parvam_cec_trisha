//sorting of numbers
#include<iostream>
using namespace std;
int main()
{
    int numbers[]={13,7,6,4,3,15,18,20};
    int n=sizeof(numbers)/sizeof(numbers[0]);
    std::cout<<"original array:";
    for(int i=0;i<n;i++)
    {
        std::cout<<numbers[i]<<" ";
    }
    std::cout<<std::endl;
    for(int i =0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(numbers[j]>numbers[j+1]){
                int temp=numbers[j];
                numbers [j]=numbers[j+1];
                numbers [j+1]=temp;
            }
        }
    }
    std::cout<<"sorted array:";
    for(int i=0;i<n;i++)
    {
        std::cout<<numbers[i]<<" ";

    }
    std::cout<<std::endl;
    return 0;
}
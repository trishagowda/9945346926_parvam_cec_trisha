 #include<iostream>
using namespace std;
class ArrayCalculator{
    private:
    int arr[100];
    int size;
    public:
    ArrayCalculator(int input[],int size);
        for(int i=0;i<inputsize;i++){
        arr[i]=inputarr[i];
    }
     size=inputsize;
}
int calculatesum(){
    int sum=0;
    for(int i=0;i<inputsize;i++)
    {
        sum=arr[i];
    }
    return sum;
}
double calculateAverage()
{
    return(double)calculateSum/size;
}
void displayArray(){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
};
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)sizeof(arr[0]);
    ArrayCalculator=calculator(arr,size);
    cout<<"array"<<endl;
    calculator.d
}
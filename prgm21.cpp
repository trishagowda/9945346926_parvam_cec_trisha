//matrix addition
#include <iostream>
using namespace std;
int main() {
    const int n=5;
    int arr1[n],arr2[n],sum[n];
    cout<<"enter five elements of first array:\n";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"enter 5 elements of second array:\n";
        for(int j=0;j<n;j++){
        cin>>arr2[j];
    }
    for(int i=0;i<n;i++){
        sum[i]=arr1[i]+arr2[j];
    }
    cout<<"sum of array:\n";
    for(int i=0;i<n;i++){
        cout<<sum[i]<<"";
    }
    return 0;
} 
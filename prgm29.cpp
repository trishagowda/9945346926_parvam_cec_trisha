#include <iostream>
using namespace std;
int main()
{ 
    int count=1;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i+1;j++){
            cout<<count<<" ";
        }
        cout<<endl;
    }
    return 0;
}
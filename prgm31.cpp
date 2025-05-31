 //square of stars
 #include <iostream>
using namespace std;
int main()
{ 
    int rows=3;
    int cols=5;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
 //rectangle of stars
 #include <iostream>
using namespace std;
int main()
{ 
    int rows=5;
    int cols=6;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
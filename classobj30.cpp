#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream MyFile("C:\\parvam\\9986679780_PARVAM_CEC\\sample.text");
    MyFile<<"Hello world"<<endl;
    MyFile<<"Hope you are fine"<<endl;
    MyFile.close();
    return 0;
}
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string text;
    ifstream MyFile("C:\\parvam\\9986679780_PARVAM_CEC\\sample.text");
    getline(MyFile,text);
    cout<<text;
    MyFile.close();
    return 0;
}
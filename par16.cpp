 //range of leap year
 #include<iostream>
#include<string>
using namespace std;
int main()
{
    
    int startYear,endYear;
    cout<<"enter a  start year";
    cin>>startYear;
    cout<<"enter a  end year";
    cin>>endYear;
    cout<<"leap years btw "<<startYear<<" and "<<endYear<<" are:"<<endl;
    for(int year=startYear;year<=endYear ;year++){
    if((year%4==0 && year%100 !=0)||(year%400==0))
    { 
        cout<<year<<endl;
    }
     }
      
    return 0;
}
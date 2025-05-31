#include<iostream>
using namespace std;
class circle
{
    private:
   float radius;
   public:
   circle(double r=0.0):radius(r){}
   void inputradius(){
    cout<<"enter the radius:";
    while(!(cin>>radius)||radius<0){
        cout<<"enter invalid input .please enter a non negative num"<<endl;
        cout<<"enter the radius:";
        cin.clear();
        cin.ignore(10000,'\n');
    }
   }
   float calculatearea(){
    const float PI=3.14159;
   }
   void displayarea(){
    float area=calculatearea();
    cout<<"the area of circle  "<<area<<endl;
    }
    void displayradius(){
        cout<<"the radius of the circle is"<<radius<<endl;
    }
   };
int main(){
    circle circle;
    circle.inputradius();
    circle.displayradius();
    circle.displayarea();
    return 0;
}
//shape area calculator using inheritance//
 #include<iostream>
using namespace std;
class shape
{
    public:
    void calculatearea(){
        cout<<"this is a shape "<<endl;

    }
};
class Circle:public shape{
    private:
    double radius;
    public:
    Circle ( double r){
        cout<<"enter the radius:";
        cin>>r;
        radius=r;
    }
    double calculatearea(){
        const double pi=3.141;
        return pi*radius*radius;
    }
};
class rectangle:public shape{
     private :
    double length ;
    double width;
    public:
    rectangle(double l,double w)
    {
        cout<<"enter the value of length"<<endl;
        cin>>l;
        cout<<"enter the value of width "<<endl;
        cin>>w;
        length=l;
        width=w;
    }
    double calculatearea()
    {
        return length*width;
    }
};
class triangle:public shape
{
 private :
    double base ;
    double height;
    public:
    triangle(double b,double h)
    {
        cout<<"enter the value of base"<<endl;
        cin>>b;
        cout<<"enter the value of height"<<endl;
        cin>>h;
        base=b;
        height=h;
    }
    double calculatearea()
    {
        return 0.5*base*height;
    }
};
int main()
{
    Circle c(5);
    rectangle rectangle(5,4);
    triangle triangle(6,8);
    shape s;
    s.calculatearea();
    cout<<"area of circle"<<c.calculatearea()<<endl;
    cout<<"area of rectangle"<<rectangle.calculatearea()<<endl;
    cout<<"area of triangle"<<triangle.calculatearea()<<endl;
    return 0;
}
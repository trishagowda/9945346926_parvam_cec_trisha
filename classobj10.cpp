 #include<iostream>
using namespace std;
class  rectangle
{
    private :
    double length ;
    double width;
    public:
    rectangle(double l,double w)
    {
        length=l;
        width=w;
    }
    double calculatearea()
    {
        return length*width;
    }
};
class triangle
{
 private :
    double base ;
    double height;
    public:
    triangle(double b,double h)
    {
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
    rectangle r(5,4);
    triangle t(6,8);
    cout<<"area of rectangle"<<r.calculatearea()<<endl;
    cout<<"area of triangle"<<t.calculatearea()<<endl;
    return 0;
}
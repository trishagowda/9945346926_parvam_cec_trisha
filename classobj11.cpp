 #include<iostream>
using namespace std;
class  polygon
{
  public:
  double calculatearea()
  {
    return 0;
  }
  };
  class rectangle:public polygon{
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
class triangle:public polygon
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
    rectangle rectangle(5,4);
    triangle triangle(6,8);
    cout<<"area of rectangle"<<rectangle.calculatearea()<<endl;
    cout<<"area of triangle"<<triangle.calculatearea()<<endl;
    return 0;
}
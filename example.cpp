#include<iostream>
using namespace std;

class shape
{
    public:
    double dim1,dim2;
    shape(double dim1,int dim2)
    {
        this -> dim1 = dim1;
         this -> dim2 = dim2;
    }
    double area()
    {
        return 0;
    }
};
class triangle : public shape;
{
public:
    triangle(double dim1,double dim2)
    : shape(dim1)
    {

    }
    double area()
    {
        return 0.5*dim1*dim2;
    }
};
int main()
{

}

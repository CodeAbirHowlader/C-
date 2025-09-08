#include<iostream>
using namespace std;
class student{
    public:  //class declaration
int id;
double gpa;
void display()
{
    cout << id << " "<< gpa << endl;
}
void setValue(int x,double y)
{
    id=x;
    gpa=y;
}


};

int main()
{
  student Alim,rahim;  //object declaring
  Alim.setValue(101,5.00);
  Alim.display();

  rahim.setValue(102,4.00);
  rahim.display();

}


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



};

int main()
{
  student Alim;
  Alim.id=101; //object declaration
  Alim.gpa=5.00;
  Alim.display();

  student rahim;
  rahim.id=102; //object declaration
  rahim.gpa=4.00;
  rahim.display();

}


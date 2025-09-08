#include<iostream>
using namespace std;
class student{
public:
    int id;
    double gpa;
    void display(){
    cout<<id<<" "<<gpa<<endl;

    }
    student(int x,double y)
    {
        id=x;
        gpa=y;
    }


};

int main()
{
   student abir(101,4.9);
   abir.display();


}

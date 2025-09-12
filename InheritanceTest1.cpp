#include<iostream>
using namespace std;
class person
{
public:
    void display()
    {
        cout << "I am a person"<< endl;
    }
};
class teacher : public person
{
public:
    void display()
    {
        cout << "I am a teacher" << endl;
    }
};
class student : public person
{
public:
    void display()
    {
        cout << "I am a student" << endl;
    }
};

int main()
{
    teacher ob1;
    ob1.display();

    student ob2;
    ob2.display();

}

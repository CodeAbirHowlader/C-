#include<iostream>
using namespace std;

class person
{
public :
    string name;
    int age;

    void display1()
    {
        cout << "name" << name << endl;
        cout << "age" << age << endl;
    }

};

class student : public person
{
public :
    int id;
    void display2()
    {
        cout << "name" << name << endl;
        cout << "age" << age << endl;
        cout << "id" << id << endl;
    }
};

int main()
{
    student s1;
    s1.id = 101;
    s1.name = "abir";
    s1.age = 23;
    s1.display2();
}

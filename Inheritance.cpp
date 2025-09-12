#include<iostream>
using namespace std;
class person
    {
    public:
        string name;
        int age;

        void display1()
        {
            cout << "Name: "<<name<<endl;
            cout << "Age: "<<age << endl;
        }

    };
    class student : public person
    {
    public:
        int id;
        void display2()
        {
            cout << "id: "<< id << endl;
            display1();
        }
    };

int main()
{
    student ob;
    ob.name= "Abir";
    ob.age= 20;
    ob.id = 101;
    ob.display2();



}

#include<iostream>
using namespace std;
class student
{
public:
    string name;
    student (string x)
    {
        name = x;
    }
    void display()
    {
        cout << name << endl;
    }
};
int main()
{
    student s1("suparna");
    sl.display();
}

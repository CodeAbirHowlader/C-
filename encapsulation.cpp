#include<iostream>
using namespace std;
class student
{
private:
    string name;
public :
    void setName (string x)
    {
        name = x;
    }
    string setName()
    {
       return name;
    }
};

int main()
{
   student s1;
   s1.setName("suparna");
}

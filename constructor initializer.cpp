#include<iostream>
using namespace std;

class student
{
    public:
    int admissionFee;
    student(int x)
    {
        admissionFee =x;
        cout << admissionFee<<endl;
    }
};
int main()
{
    student s1(1400);

}

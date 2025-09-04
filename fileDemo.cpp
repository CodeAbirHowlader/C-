#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file;
    file.open("student.txt");
    file<< "I am abir . I am from barishal\n";
    file.close();
}

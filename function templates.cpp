#include<iostream>
using namespace std;
template <class myTemplate>
myTemplate add (myTemplate a,myTemplate b)
{
    return a+b;
}

int main()
{
    cout << add(20.94,48.734)<<endl;
}

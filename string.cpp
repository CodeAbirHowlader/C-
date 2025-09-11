#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char name1[]= "Abir";
    char name2[]=" howlader";

    int value = strcmp(name1,name2);
    if(value=0)
        cout << "String are equal";
    else
        cout << "String is not equal";

//   strupr(name1);
//   cout<< name1;
//
//    strlwr(name2);
//   cout<< name2;
//    strcpy(name2,name1);
//    cout << "name is: "<< name2;

//    int len=strlen(name1);
//    cout << "Length of string is : " << len;
}

#include<iostream>
#include<stdlib.h>
using namespace std;
class A{
    int a;
    public:
    A() //constructor of class A
    {
        cout<<"Constructor of class A"<<endl;
    }
};
int main()
{
    A* a = new A(); //object creation of class A by new operator
    cout<<"Object of class A was created using new operator!"<<endl;

    A* b = (A*)malloc(sizeof(A)); //object creation of class A by malloc() function
    cout<<"Object of class A was created by using malloc()"<<endl;
}
// while creating object using new operator Default Constructor was called and using malloc function Default Constructor was not called.
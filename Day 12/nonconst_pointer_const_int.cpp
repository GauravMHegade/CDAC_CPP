#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=20;
    const int *ptr = &a; //pointer of integer is constant
    cout<<*ptr<<endl;
    //*ptr = 5; //error
    a = 5;  //allowed
    cout<<*ptr<<endl;
    ptr = &b;  //allowed
    cout<<*ptr<<endl;
}
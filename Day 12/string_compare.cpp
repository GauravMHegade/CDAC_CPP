#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str1[20];
    char str2[20];
    cout<<"Enter first string : ";
    cin>>str1;
    cout<<"Enter second string : ";
    cin>>str2;
    int x = strcmp(str2,str1);
    if(x == 1){
        cout<<"String 2 is greater than string 1 \n"<<endl;
    }
    if(x == (-1)){
        cout<<"String 1 is greater than string 2 \n"<<endl;
    }
    if(x == 0){
        cout<<"Sring 1 and string 2 are equal \n"<<endl;
    }
}
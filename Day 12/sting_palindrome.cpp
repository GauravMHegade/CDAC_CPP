#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str1[20];
    char str2[20];
    cout<<"Enter first string : ";
    cin>>str1;
    strcpy(str2,str1);
    strrev(str1);
    if(strcmp(str1 , str2) == 0)
    {
        cout<<"String is palindrome";
    }
    else{
        cout<<"String is not palindrome";
    }
}
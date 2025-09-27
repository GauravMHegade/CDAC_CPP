#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int *ptr;
    int n;
    cout<<"Accept no of elements: ";
    cin>>n;
    ptr = (int*)malloc(n* sizeof(int));
    cout<<"Enter elements: ";
    for(int i=1;i<=n;i++){
        cin>>ptr[i];
    }
    cout<<"Display elements: ";
    for(int i=1;i<=n;i++){
        cout<<ptr[i]<<"\t";
    }
}
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str[50];
    char *ptr=str;
    int space=0,count=0,vowel=0;
    cout<<"Enter multi string :"<<endl;
    gets(str);
    puts(str);
    while( *ptr != '\0'){
        if(*ptr == 32)
        space++;
        if(*ptr == 'a' || *ptr =='e' || *ptr =='i' || *ptr =='o' || *ptr =='u' || *ptr =='A' || *ptr =='E' || *ptr =='I' || *ptr =='O' || *ptr =='U')
        vowel++;
        count++;
        ptr++;
    }
    cout<<"No of characters : "<<count<<endl;
    cout<<"No of spaces : "<<space<<endl;
    cout<<"No of words : "<<space+1<<endl;
    cout<<"No of vowels : "<<vowel<<endl;
}
    

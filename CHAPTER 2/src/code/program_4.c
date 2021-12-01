// Check whether a string is Palindrome or not 
#include<stdio.h>
#include<string.h>

int main(){
    char name[50], temp;
    printf("Enter the name : ");
    gets(name);
    // reverse = strrev(name);
    int value=strcmp(name,strrev(name));
    if(value == 0){
        printf("The entered string is PALINDROME " );
    }
    else{
        printf("The entered string is NOT a PALINDROME " );
    }
    return 0;
}
// # copying a string using strcpy function

#include<stdio.h>
#include<string.h>

void main(){
    char source[] = "hello world";
    char copy[80];

    strcpy(copy,source);
    printf("Original word is : %s", source);
    printf("\nCopy is : %s", copy);

}
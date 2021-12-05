// Comparison of two strings using strcmp() function

#include<stdio.h>
#include<string.h>

void main(){
    char str1[50], str2[50];
    int a,b,c;
    char compare[] = "Computer";

    printf("Enter the first word: ");
    gets(str1);
    printf("Enter the second word: ");
    gets(str2);

    a = strcmp(str1, compare); 
    b = strcmp(str2, compare); 
    c = strcmp(str1, str2);

    printf("Value of a,b,c after comparing is : %d , %d , %d", a,b,c);
}
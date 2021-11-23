// program to calculate the length of the string 

// Finding the length of the string without using strlen() function
# include<stdio.h>
#include<string.h>

void main(){
    char name[80];
    int i=0, length;
    printf("Enter the string \n");
    gets(name);
    while(name[i]!='\0'){
        i++;
    }
    printf("\nLength of the string without strlen() function is %d \n", i);
    length = strlen(name);
    printf("Length of the string using strlen() function is %d \n", length);
    
}

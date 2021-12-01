// Copying a string without using strcpy() function

#include<stdio.h>

void main(){
    char str[80], str_cpy[80];
    int i=0;
    printf("Enter a string :");
    gets(str);

    while (str[i] != '\0')
    {
        str_cpy[i] = str[i++];
    }
    str_cpy[i] = '\0';
    printf("Original string : %s \n", str);
    printf("Copied string : %s \n", str_cpy);
}
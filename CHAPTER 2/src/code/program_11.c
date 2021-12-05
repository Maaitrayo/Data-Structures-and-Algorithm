// Upper and lower case functions

#include<stdio.h>
#include<string.h>

void main(){
    char low[50], up[50];

    printf("Enter a sentence in lower case: ");
    gets(low);
    printf("Enter a sentence in upper case: ");
    gets(up);

    printf("\nLower to upper case: %s",strupr(low)); 
    printf("\nUpper to Lower case: %s",strlwr(up)); 
}
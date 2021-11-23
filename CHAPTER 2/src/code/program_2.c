// Concatenation of two string
#include <stdio.h>
#include <string.h>

void main() {
    char name_1[50], name_2[50], name_1_copy[50];
    int i,j;
    printf("Enter the first string :");
    gets(name_1);
    printf("Enter the second string :");
    gets(name_2);
    strcpy(name_1_copy,name_1);
    i=j=0;
    while(name_1[i]!='\0')
        i++;
    while(name_2[j]!='\0')
        name_1[i++] = name_2[j++];
    printf("\n###### without using function ######\n");
    printf("first string : %s \n", name_1_copy);
    printf("second string : %s \n", name_2);
    printf("After concatenation of first and second string : %s \n", name_1);
    printf("##### ends #####\n");

    strcat(name_1_copy,name_2);
    printf("\n###### using strcat() function #####\n");
    printf("concatenated string : %s \n", name_1_copy);

}
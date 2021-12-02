// Comparison of two strings 

#include<stdio.h>
#include<string.h>

void main(){
    char str1[50], str2[50];
    int len1, len2, i=0, check = 0;

    printf("Enter the first string : ");
    gets(str1);
    printf("Enter the second string : ");
    gets(str2); 

    len1 = strlen(str1);
    len2 = strlen(str2);

    if(len1 != len2){
        printf("Length of the entered strings are not equal!\n");
        return 0;
    }

    for(i=0;i<len1;i++){
        if(str1[i] == str2[i]){
            check = 1;
        }
        else
            check = 0;
    }
    if(check == 1)
        printf("Both the first and second strings are same\n");
    else
        printf("The strings are not equal\n");
}
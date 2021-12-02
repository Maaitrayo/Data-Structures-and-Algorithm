//  joining two strings

#include <stdio.h>
#include <string.h>

void main(){
    char str1[50], str2[50], strjoin[50];
    int i = 0,j= 0;
    printf("Enter the first string : ");
    gets(str1);
    printf("Enter the second string : ");
    gets(str2);

    while(str1[i] != '\0'){
        strjoin[i] = str1[i];
        i++;
    }
    while(str2[j] != '\0'){
        strjoin[i++] = str2[j++];
        // i++;
    }
    strjoin[i] = '\0';
    printf("\n First string : %s", str1);
    printf("\n Second string : %s", str2);
    printf("\n Resultant string is : %s\n", strjoin);
}
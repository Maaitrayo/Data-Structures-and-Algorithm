//  Reversing a String
#include<stdio.h>
#include<string.h>

void main(){
    char name[50], reverse[50];
    int len,k=0;
    printf("Enter a name : ");
    gets(name);

    len = strlen(name);
    for(int i =len-1;i>=0;i--){
        reverse[k] = name[i];
        k++;
    }
    printf("Reversed string is : %s",reverse);
}
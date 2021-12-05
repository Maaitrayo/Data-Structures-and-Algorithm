// Substring of a string(extracting charecters)

#include<stdio.h>
#include<string.h>

void main(){
    int pose,n,i, length;
    char str[50];

    printf("Enter a word/sentence: ");
    gets(str);
    printf("Enter the first position to start extracting: ");
    scanf("%d",&pose);
    printf("Enter the number of words to extract: ");
    scanf("%d",&n);

    length = strlen(str);
    if(pose+n-1 > length){
        printf("Exceeds the length of the sring");
    }
    else{
        printf("\nThe Substring is: ");
        for( i = (pose-1); i < (pose-1+n); i++)
        {
            printf("%c", str[i]);
        } 
    }

}
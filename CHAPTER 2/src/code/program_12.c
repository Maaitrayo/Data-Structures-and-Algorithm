// Sorting strings

#include<stdio.h>
#include<string.h>

void main(){
    char names[10][30], temp[30];
    int i,j,n=0;

    printf("Enter the names you want column wise: ");
    printf("\nEnter 'END' to stop entering names:\n");
    scanf("%s", names[n]);
    while(strcmp(names[n], "END")>0){
        n++;
        scanf("%s", names[n]);
    }
    printf("The enterd names are: ");
    for(i =0;i<n;i++)
        printf(" %s, ", names[i]);
    printf("There are %d names", n);
    for(i=0; i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(names[i], names[j])>0){
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    printf("\nSorted words are: ");
    for (i = 0; i < n; i++)
        printf(" %s,", names[i]);
}

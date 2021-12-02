#include<stdio.h>

int main(){
	int row_1, col_1, row_2, col_2;
	printf("Enter the number of rows of first Matrix: ");
	scanf("%d", &row_1);
	printf("Enter the number of columns of first Matrix: ");
	scanf("%d", &col_1);

    printf("\nEnter the number of rows of second Matrix: ");
    scanf("%d", &row_2);
    printf("Enter the number of columns of second Matrix: ");
    scanf("%d", &col_2);

    int array_1[row_1][col_1], array_2[row_2][col_2]; // initializing the arrays
    if(col_1 != row_2){
        printf("\nNumber of columns of first Matrix should be equal to the number of rows of second Matrix");
        return 0;
    }

    int product[row_1][col_1];

    printf("\nEnter element of first Matrix: ");
    for(int i = 0; i <row_1; i++){
        for(int j = 0; j <col_1;j++){
            scanf("%d", &array_1[i][j]);
        }
    }

    printf("\nEnter element of second Matrix: ");
    for(int i = 0; i <row_2; i++){
        for(int j = 0; j <col_2;j++){
            scanf("%d", &array_2[i][j]);
        }
    }

    for(int i=0;i<row_1;i++){
        for(int j = 0; j < col_2; j++){
            product[i][j] = 0;
            for(int k=0; k<col_1; k++){
                product[i][j] = product[i][j] + (array_1[i][k] * array_2[k][j]);
            }
        }
    }

    printf("\n-------MATRIX OBTAINED AFTER MULTIPLICATION-------\n");
    for(int i=0; i <row_1; i++){
        for(int j = 0; j <col_2; j++){
            printf("\t%d\t", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}
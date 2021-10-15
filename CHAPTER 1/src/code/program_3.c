#include<stdio.h>

int main(){
	
	int i,j, row_1, col_1;
	printf("Enter the number of rows for MATRIX :\n");
	scanf("%d", &row_1);

	printf("Enter the number of columns for MATRIX :\n");
	scanf("%d", &col_1);

	int array_1[row_1+1][col_1+1];

	printf("\n------- ENTER ELEMENTS OF THE MATRIX -------\n");
	for(i = 0; i < row_1; i++){
		for(j = 0; j < col_1; j++){
			scanf("%d", &array_1[i][j]);
		}
	}

	printf("\n------- FINDING THE SUM OF ROW AND COLUMN MATRIX -------\n");
	for(i = 0; i < row_1; i++){
		array_1[i][col_1] = 0;
		for(j = 0; j < col_1; j++){
			array_1[i][col_1] = array_1[i][col_1] + array_1[i][j];
		}
	}
	for(j = 0; j < col_1; j++){
		array_1[row_1][j] = 0;
		for(i = 0; i < row_1; i++){
			array_1[row_1][j] = array_1[row_1][j] + array_1[i][j];
		}
	}

	printf("\n------- RESULTING MATRIX SHOWING SUM OF ROW AND COLUMN -------\n");
	for(i = 0; i <= row_1; i++){
		for(j = 0; j <= col_1; j++){
			printf("\t%d\t", array_1[i][j]);
		}
		if(i == row_1-1){ // This if statement helps us in  not printing the bottom right element as 0 for better understanding 
			col_1-=1;
		}
		printf("\n");
	}

	return 0;
}
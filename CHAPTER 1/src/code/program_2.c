#include<stdio.h>

int main(){
	
	int i,j, row_1, row_2, col_1, col_2;
	printf("Enter the number of rows for MATRIX 1:\n");
	scanf("%d", &row_1);

	printf("Enter the number of columns for MATRIX 1:\n");
	scanf("%d", &col_1);

	printf("\nEnter the number of rows for MATRIX 2:\n");
	scanf("%d", &row_2);

	printf("Enter the number of columns for MATRIX 2:\n");
	scanf("%d", &col_2);

	if ((row_1 != row_2) || (col_1 != col_2)){
		printf("\nBOTH THE MATRICES SHOULD HAVE SAME DIMENSION!\n");
		return 0;
	}

	int array_1[row_1][col_1], array_2[row_2][col_2], arr_sum[row_1][col_1];

	printf("\n------- ENTER ELEMENTS OF FIRST MATRIX -------\n");
	for(i = 0; i < row_1; i++){
		for(j = 0; j < col_1; j++){
			scanf("%d", &array_1[i][j]);
		}
	}

	printf("\n------- ENTER ELEMENTS OF SECOND MATRIX -------\n");
	for(i = 0; i < row_2; i++){
		for(j = 0; j < col_2; j++){
			scanf("%d", &array_2[i][j]);
		}
	}

	printf("\n------- SUBTRACTING THE 2 MATRIX -------\n");
	for(i = 0; i < row_2; i++){
		for(j = 0; j < col_2; j++){
			arr_sum[i][j] = array_1[i][j] - array_2[i][j];
		}
	}

	printf("\n------- MATRIX 1 -------\n");
	for(i = 0; i < row_1; i++){
		for(j = 0; j < col_1; j++){
			printf("\t%d\t", array_1[i][j]);
		}
		printf("\n");
	}

	printf("\n------- MATRIX 2 -------\n");
	for(i = 0; i < row_2; i++){
		for(j = 0; j < col_2; j++){
			printf("\t%d\t", array_2[i][j]);
		}
		printf("\n");
	}

	printf("\n------- RESULTING SUBTRACTED MATRIX -------\n");
	for(i = 0; i < row_2; i++){
		for(j = 0; j < col_2; j++){
			printf("\t%d\t", arr_sum[i][j]);
		}
		printf("\n");
	}

	return 0;
}
#include<stdio.h>

int main(){
	int row, col;
	printf("Enter the number of rows: ");
	scanf("%d", &row);
	printf("Enter the number of columns: ");
	scanf("%d", &col);

	int arr[row][col], arr_t[col][row];
	printf("Enter the Elements in the array: ");
	for(int i=0;i<row;i++){
		for(int j=0; j<col; j++){
			scanf("%d", &arr[i][j]);
		}
	}

	for(int i=0;i<col;i++){
		for(int j=0; j<row; j++){
			arr_t[i][j] = arr[j][i];
		}
	}

	printf("\n-------DISPLAYING THE ORIGINAL MATRIX-------\n");
	for(int i=0;i<row;i++){
		for(int j=0; j<col; j++){
			printf("\t%d\t",arr[i][j]);
		}
		printf("\n");
	}

	printf("\n-------DISPLAYING THE TRANSPOSED MATRIX-------\n");
	for(int i=0;i<col;i++){
		for(int j=0; j<row; j++){
			printf("\t%d\t",arr_t[i][j]);
		}
		printf("\n");
	}

}
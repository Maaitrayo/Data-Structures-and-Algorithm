#include<stdio.h>

int main(){
	int row, col,sum = 0;
	printf("Enter the number of rows: ");
	scanf("%d", &row);

	printf("Enter the number of columns: ");
	scanf("%d", &col);

	if(row!=col){
		return 0;
	}

	int arr[row][col];
	printf("Enter the Elements in the array: ");
	for(int i=0;i<row;i++){
		for(int j=0; j<col; j++){
			scanf("%d", &arr[i][j]);
		}
	}

	for(int i=0;i<row;i++){
		for(int j=0; j<col; j++){
			if(i==j){
				sum = sum+arr[i][j];
			}
		}
	}

	printf("\n-------DISPLAYING THE MATRIX-------\n");
	for(int i=0;i<row;i++){
		for(int j=0; j<col; j++){
			printf("\t%d\t",arr[i][j]);
		}
		printf("\n");
	}

	printf("\n-------SUM OF THE DIAGONAL ELEMENTS OF THE MATRIX-------\n");
	printf("\t %d \n", sum);

	return 0;
}
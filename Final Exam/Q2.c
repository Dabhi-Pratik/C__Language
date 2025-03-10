#include<stdio.h>


int main(){
	
	int row,col,i,j;
	
	printf("Enter rows :");
	scanf("%d",&row);
	
	printf("Enter columns :");
	scanf("%d",&col);
	
	int arry[row][col];
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("arry[%d][%d] :",i,j);
			scanf("%d",&arry[i][j]);
		}
	}
	
	int sum =0;
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			
			sum = sum+arry[i][j];
		}
	}
	
	printf(" Sum of elements of a Matrix is %d",sum);
	
	
	
	
	return 0;
}

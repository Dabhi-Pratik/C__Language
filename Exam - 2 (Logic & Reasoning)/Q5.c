#include<stdio.h>


  int cube(n){
  	
  	return n*n*n;
  }


int main(){
	
	int i;
	
	printf("Enter number for cube : ");
	scanf("%d",&i);
	
	
	
	printf("Cube of %d is %d ",i,cube(i));
	
	return 0;
}

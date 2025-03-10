#include<stdio.h>

int cube(int a){
	return a*a*a;
}


int main(){
	
	int i;
	
	printf("Enter a Number for cube: ");
	scanf("%d",&i);
	
	
	printf("Cube of Number is %d",cube(i));
	
	
	return 0;
}

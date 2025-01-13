#include<stdio.h>


void add(a,b){
	printf("addition of a & b is : %d \n",a+b);
}

void sub(a,b){
	printf("substraction of a & b is : %d \n",a-b);
}

void mult(a,b){
	printf("multiplication  of a & b is : %d \n",a*b);
	
}

void div(a,b){
	printf("dividetion  of a & b is : %d \n",a*b);
}


int main(){
	
	int a,b;
	
	printf("a: ");
	scanf("%d",&a);
	
	printf("b: ");
	scanf("%d",&b);
	
	add(a,b);
	sub(a,b);
	mult(a,b);
	div(a,b);
	
	
	
	return 0;
}

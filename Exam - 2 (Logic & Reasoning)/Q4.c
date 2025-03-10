#include<stdio.h>



int main(){
	
		char op;
	
	printf("Enter operator(+, -, *, /) : ");
	scanf("%c",&op);
	
	int a,b;
	
	printf("Enter a: ");
	scanf("%d",&a);
	
	printf("Enter b: ");
	scanf("%d",&b);
	

	
	switch(op){
		
		
		case'+': 
		printf("Addition : %d",a+b);
		break;
		
		case'-': 
		printf("Subtraction : %d",a-b);
		break;
		
		case'*': 
		printf("Multiplication : %d",a*b);
		break;
		
		case'/': 
		printf("Deviation : %d",a/b);
		break;
		
		default:
			printf("Error........!");
	
			
	}
	
	
	return 0;
}

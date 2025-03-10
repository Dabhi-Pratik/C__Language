#include<stdio.h>


int fact(n){
	
	if(n==1){
		return 1;
	}
	
	return n*fact(n-1);
}


int main(){
	int number;
	
	printf("Number :");
	scanf("%d",&number);
	

	
	 fact(number);
	 
	 
	 printf("Factorial of %d = %d \n",number,fact(number));
	
	
	return 0;
}

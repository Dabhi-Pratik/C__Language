#include<stdio.h>

int main(){
	
	  int num;
	  
	  printf("Enter numer for find factorial:");
	  scanf("%d",&num); 	
	  
	   int fact=1;
	   int i=1;
	   
	   while(i <= num){
	   	
	   	   fact=fact*i;
	   	   
	   	   i++;
	   }
	   
	   printf("Factorial of %d is: %d",num, fact);

	
	
	return 0;
}

#include<stdio.h>

int main(){
	
	 int i = 1;
	 
	 int num;
	 printf("Eanter number for even number:");
	 scanf("%d", &num);
	 
	do {
	 	  
	 	      if( i%2 == 0){
	 	      	  printf("%d \n", i);
			   }
			   
		i++;	   
	 }while( i<= num );
	 
	 
	 
	 printf("\n \n ODD NUMBERS \n \n");
	 
	 int j= 1;
	 
	 int sum;
	 printf("Eanter number for odd number:");
	 scanf("%d", &sum);
	 
	do {
	 	  
	 	      if( j%2 == 1){
	 	      	  printf("%d \n", j);
			   }
			   
		j++;
			   
	 }while( j <= sum );
	
	
	
	return 0;
}

#include<stdio.h>

int main(){
	
	 int i = 1;
	 
	 int num;
	 printf("Eanter number for even number:");
	 scanf("%d", &num);
	 
	 while( i<= num ){
	 	  
	 	      if( i%2 == 1){
	 	      	  printf("%d \n", i);
			   }
			   
		i++;	   
	 }
	
	
	
	return 0;
}

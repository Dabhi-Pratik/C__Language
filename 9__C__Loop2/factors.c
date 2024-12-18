#include<stdio.h>

int main(){
	
	  int i = 1;
	  int num;
	  printf("Enter number for find factors:");
	  scanf("%d", &num);
	
	  while( i <= 10 ){ 
	    
	      printf("%d \n", i*num);
	      
	      i++;
	  }
	return 0;
}



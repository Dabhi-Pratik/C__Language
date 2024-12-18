#include<stdio.h>

  int main(){
  	
  	int order;
  	
  	printf("press 1 for burger \n");
  	printf("press 2 for pizza \n");
  	printf("press 3 for sandwitch \n");
  	
  	printf("Order:");
  	scanf("%d",&order);
  	
  	if( order == 1 ){
  		printf("Your ordered Burger");
	  }
	  
  	else if( order==2 ){
  		printf("Your ordered Pizza");
	  }
	
    else if ( order==3 ){
    	printf("Your ordered Sendwitch");
	}
	  
	  else{
	  	  printf("Invalid order");
	  }
	  
	  return 0;
  }
  

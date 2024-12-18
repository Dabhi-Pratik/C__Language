#include<stdio.h>

int main(){
	
	
	  int i=1;
	  
	  while(i<=10){
	  	
	  	printf("Table=2 * %d =%d \n", i , i*2);
	  	
	  	 i++;
		  
	   }
	   
  int j=1;
  int sum=0;
  
  while ( j <= 10){
  	
  	  printf("sum=%d \n",sum+j);
  	  
  	  j++;
  	  sum++;
  	 
  }
  
  int k=10;
  
  while (k>0){
  	printf("%d \n",k);
  	
  	k--;
  }
  
  int l;
  
  printf("Enter number:");
  scanf("%d",&l);
  
  while (l > 0){
  	printf("%d, ",l);
  	
  	l--;
  }
  
  
	
	return 0;
}

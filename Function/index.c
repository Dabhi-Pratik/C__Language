#include<stdio.h>


void arry_sum(){
	
	 int arry[3]={3, 4, 6};
	 int i;
	 int sum=0;
	 
	 for(i=0 ; i<3; i++){
	 	sum +=arry[i];
	 }
	 printf("arry sum:%d \n",sum);
}

void iteration_sum(){
	  int i;
	  int sum=0;
	  
	  for( i=0; i<10; i++){
	  	  sum +=i;
	  }
	  
	  printf("iteration sum : %d \n",sum);
	
}

void digit_sum(){
	int a=10;
	int b=20;
	int sum=a+b;
	
	printf("digit sum:%d",sum);
}





int main(){
	
	  arry_sum();
	  iteration_sum();
	  digit_sum();
	  
	return 0;
}

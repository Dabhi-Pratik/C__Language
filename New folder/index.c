#include<stdio.h>


 int rec(n){
 	
 	int n1=n*rec1(n-1);
 	
 	printf("%d * %d \n", n, n1);
 	
 	return  n1;
 }
 
 int rec1(n){
 	int n1=n*rec2(n-1);
 	
 	printf("%d * %d \n",n,n1);
 	
 	return n1;
 }
 
 int rec2(n){
 	
 	int n1=n*rec3(n-1);
 	
 	printf("%d * %d \n",n,n1);
 	
 	return n1;
 }
 
 int rec3(n){
 	
 	int n1=n*rec4(n-1);
 	
 	printf("%d * %d \n",n,n1);
 	
 	return n1;
 }


int main(){
	

	
	printf("rec : %d ",rec(4));
	
	
	
	return 0;
}

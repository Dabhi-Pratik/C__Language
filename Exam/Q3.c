#include<stdio.h>


int main(){
	
	
	int i;
  int arry[5]={3, 4, -5, -6, 8};

    int size = sizeof(arry)/sizeof(arry[0]);
       
     int sum=0;
	 
	 for(i=0; i<size; i++){
	 	if(arry[i]>0){
	 		sum +=arry[i];
		 }
	 	
	 } 
	
	printf("sum of positive value :%d",sum);
	
	
	return 0;
}

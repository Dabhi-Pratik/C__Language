#include<stdio.h>


int main(){
	
	int i,size;
	
	printf("size :");
	scanf("%d",&size);
	
	int arry[size];
	
	for(i=0; i<size; i++){
		printf("arry[%d] :",i);
		scanf("%d",&arry[i]);
	}
	

	
	int max =0;
	
	for(i=0; i<size; i++){
		if(max < arry[i]){
			max = arry[i];
		}
	}
	
	printf("maximum number is %d",max);
	
	return 0;
}

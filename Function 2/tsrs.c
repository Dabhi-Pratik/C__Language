#include<stdio.h>


  int sum(n){
  	int i;
  	int sum=0;
  	
  	for( i=0; i<n; i++){
  		sum +=i;
	  }
  	  return sum;
  }


int main(){
	
	int a=10;
	
	int avg=sum(a)/a;
	
	printf("avg:%d",avg);
	
	return 0;
}

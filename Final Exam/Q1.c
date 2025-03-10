#include<stdio.h>



int main(){
	
	int a,b;
	
	printf("Enter First angle :");
	scanf("%d",&a);
	
	printf("Enter Second angle :");
	scanf("%d",&b);
	
	int c = 180-(a+b);
	
	printf("Third angle is %d",c);
	
	return 0;
}

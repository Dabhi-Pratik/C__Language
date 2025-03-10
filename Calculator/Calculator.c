#include<stdio.h>

void add(int f,int s){
	printf("\nAddtion of %d and %d = %d",f,s,f+s);
	
}

void sub(int f,int s){
	printf("\nSubstraction of %d and %d = %d",f,s,f-s);
	
}

void mult(int f,int s){
	printf("\nMultimplication of %d and %d = %d",f,s,f*s);
	
}


void div(int f,int s){
	printf("\nDividation of %d and %d = %d",f,s,f/s);
	
}

void mod(int f,int s){
	printf("\n\nModulus of %d and %d = %d",f,s,f%s);
	
}


int main(){
	
	 int first,second;
	 int choice;
	 
	 do{
	 	printf("\npress 1 for + \n");
	 	printf("press 2 for - \n");
	 	printf("press 3 for x \n");
	 	printf("press 4 for / \n");
	 	printf("press 5 for %% \n");
	 	printf("press 0 for EXIT \n");
	 	
	 	printf("\nEnter your choice :");
	 	scanf("%d",&choice);
	 	
	 	printf("\nEnter your First number :");
	 	scanf("%d",&first);
	 	
	 	printf("Enter your Second number :");
	 	scanf("%d",&second);
	 	
	 	
	 	
	 	switch(choice){
	 		
	 	    case 1:
	 			add(first,second);
	 			break;
	 			
	 	    case 2:
	 			sub(first,second);
	 			break;
	 			
	 		case 3:
	 			mult(first,second);
	 			break;
	 			
	 		case 4:
	 			div(first,second);
	 			break;
	 			
	 		case 5:
	 			mod(first,second);
	 			break;
	 			
	 	   default:
			printf("Enter vaild choice......");		
		 }
	 	
	 	
	 }while(choice != 0);
	
	
	return 0;
}

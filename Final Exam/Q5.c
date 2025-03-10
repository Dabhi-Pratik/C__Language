#include<stdio.h>



int main(){
	
	int month;
	
	printf("Enter month Number: ");
	scanf("%d",&month);
	
	switch(month){
		
		case 1:
			printf("January 31 days in this month");
			break;
			
		case 2:
			printf("February 28 days or 29 days in leap year in this month");
			break;
			
		case 3:
			printf("March 31 days in this month");
			break;	
		
		case 4:
			printf("April 30 days in this month");
			break;
			
	    case 5:
			printf("May 31 days in this month");
			break;
			
		case 6:
			printf("June 30 days in this month");
			break;
		
		case 7:
			printf("July 31 days in this month");
			break;	
			
		case 8:
			printf("August 31 days in this month");
			break;
		
		case 9:
			printf("September 30 days in this month");
			break;
			
		case 10:
			printf("October 31 days in this month");
			break;	
			
		case 11:
			printf("November 30 days in this month");
			break;
			
		case 12:
			printf("December 31 days in this month");
			break;	
			
		default:
			printf("Does not Existing Month.............!");
	}
	
	
	
	return 0;
}

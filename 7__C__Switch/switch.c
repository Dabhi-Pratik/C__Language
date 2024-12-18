#include<stdio.h>


 int main(){
 	
 	int choice;
 	
 	printf("MENUE:--\n");
 	
 	printf("press 1 for pizza.\n");
 	printf("press 2 for Burger.\n");
 	printf("press 3 for Sandwitch.\n");
 	printf("-------------\n");
 	
 	printf("Enter Your Choice:");
 	scanf("%d", &choice);
 	
 	switch(choice){
 		 case 1 : printf("Your Ordered Pizza.");
 		          
 		          printf("Select type--\n");
 		          
 		               printf("press 1 for onion pizza.\n");
 		               printf("press 2 for double cheese pizza.\n");
 		               printf("press 3 for margarita pizza.\n");
 		               printf("press 4 for Greek pizza.\n");
 		               printf("-------\n");
 		               
 		               int type;
 		                 printf("Select Pizza type:");
						 scanf("%d",&type);
						 
						 if( type==1){
						 	 printf("Your Ordered onion Pizza.");
						 }
						 
					   else if( type==2){
						 	 printf("Your Ordered double cheese Pizza.");
						 }
						 
					   else if( type==3){
						 	 printf("Your Ordered margarita Pizza.");
						 }       
 		        
				       else if( type==4){
						 	 printf("Your Ordered Greek Pizza.");
						 } 
						 
					  else{
					  	 printf("This pizza is not available");
					  }
					  
					  break; 
					       
 		        case 2 : printf("Your Ordered Burger.");
 		          
 		          printf("Select type--\n");
 		          
 		               printf("press 1 for Hamburger.\n");
 		               printf("press 2 for Portobello mushroom burger.\n");
 		               printf("press 3 for Turkey burger.\n");
 		               printf("press 4 for Veggie burger.\n");
 		               printf("-------\n");
 		               
 		               int burger;
 		                 printf("Select Burger type:");
						 scanf("%d",&burger);
						 
						 if( burger==1){
						 	 printf("Your Ordered Hamburger.");
						 }
						 
					   else if( burger==2){
						 	 printf("Your Ordered  Portobello mushroom burger.");
						 }
						 
					   else if( burger==3){
						 	 printf("Your Ordered Turkey burger.");
						 }       
 		        
				       else if( burger==4){
						 	 printf("Your Ordered Veggie burger.");
						 } 
						 
					  else{
					  	 printf("This Burger is not available");
					  }
					  
					  break; 
					 
		 case 3 : printf("Your Ordered Sandwich.");
 		          
 		          printf("Select type--\n");
 		          
 		               printf("press 1 for Club sandwich.\n");
 		               printf("press 2 for Grilled Cheese sandwich.\n");
 		               printf("press 3 for Nutella Sandwich.\n");
 		               printf("press 4 for Veggie burger.\n");
 		               printf("-------\n");
 		               
 		               int sandwich;
 		                 printf("Select Sandwich type:");
						 scanf("%d",&sandwitch);
						 
						 if( burger==1){
						 	 printf("Your Ordered Hamburger.");
						 }
						 
					   else if( burger==2){
						 	 printf("Your Ordered  Portobello mushroom burger.");
						 }
						 
					   else if( burger==3){
						 	 printf("Your Ordered Turkey burger.");
						 }       
 		        
				       else if( burger==4){
						 	 printf("Your Ordered Veggie burger.");
						 } 
						 
					  else{
					  	 printf("This Burger is not available");
					  }
					  
					  break;         
 		        
				 
				 
				        
 		        
 		
	 }
 }

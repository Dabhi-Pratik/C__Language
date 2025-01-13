#include<stdio.h>

int say_some(){
	
	return 100;
}

int say_more(){
	
	return 200;
}


int main(){
	
	
	say_some();
	
	
	printf("Chek : %d", say_some()+say_more());
	
	
	return 0;
}

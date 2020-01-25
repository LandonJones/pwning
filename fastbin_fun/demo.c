#include <stdio.h>  
#include <stdlib.h> 


int main(){ 

	char* a = malloc(120); 
	char* b = malloc(120); 
	char* c = malloc(120); 
	
	fgets(a, 120, stdin); 
	fgets(b, 120, stdin); 
	fgets(c, 120, stdin); 
	printf("%s\n", a); 
	printf("%s\n", b); 
	printf("%s\n", c); 
	free(a); 
	free(b); 
	free(c); 
} 

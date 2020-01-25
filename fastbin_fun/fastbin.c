#include <stdio.h> 
#include <stdlib.h> 

char target[10] = "XXXXXXXXX\0";
char* chunks[7]; 
int main(){ 
    printf("puts: %p\n", puts); 
    int malloc_count = 0; 
    char input_buf[10]; 
    while (1){ 
	printf("1) Malloc %d/7\n2) Target\n3) Free\n4) Exit\n", malloc_count); 
	fgets(input_buf, 10, stdin); 

	int choice = atoi(input_buf); 

	if (choice == 1){
		if (malloc_count > 7){
		    printf("no sir that's cheating\n"); 
		    exit(1); 
		} 
		else{ 
		    malloc_count++; 
		    printf("size: "); 
		    fgets(input_buf, 10, stdin); 
		    int size = atoi(input_buf); 
		    printf("index: ");
		    fgets(input_buf, 10, stdin); 
		    int index = atoi(input_buf); 
		    char* new_lad = (char *)malloc(size*sizeof(char)); 
		    printf("data: "); 
		    fgets(new_lad, size, stdin); 
		    chunks[index] = new_lad; 
		} 
	} 
	else if (choice == 2){
		printf("%s\n", target); 
	}
	else if (choice == 3){ 
		printf("index: "); 
		char input_buf[10]; 
		fgets(input_buf, 10, stdin); 
		int index = atoi(input_buf);

		free(chunks[index]); 
		printf("done\n"); 
	}
	else if (choice == 4){ 
		printf("bye\n"); 
		exit(0); 
	} 
	else{
		printf("invalid boi\n"); 
	}
	printf("\n"); 	

    } 
} 

#include <stdio.h>

/**
 * Simple C program that reads user input and prints
 * out to the screen
 */
int main(void){
	char f_name[50]; 
	puts("Enter your name below:");
	scanf("%s", f_name);
	printf("\n %s", f_name);
	return (0);
}

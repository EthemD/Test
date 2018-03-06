#include <stdio.h>

int main(void){

	int c = 50;
	printf("The code is: %d\n", c);
	int* P = &c;
	printf("The pointer is: %d\n", (*P));
	(*P)++;
	printf("The new pointer is: %d\n", c);

	int array_name[5];
	array_name[2] = 13;
	printf("array_name[2] = %d\n", *(array_name+2));

}

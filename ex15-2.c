#include <stdio.h>

int main() {
	int numbers[] = {10, 20, 30, 40, 50};
	int *ptr = numbers;

	//print using array indexing
	printf("Array elements using indexing: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", numbers[i]);
	}
	printf("\n");

	//point using pointer arithmetic
	printf("Array elements using pointer arithmetic: ");
	for(int i = 0; i < 5; i++) {
		printf("%d ", *(ptr+i));
	}
	printf("\n");

	//Modify the array using the pointer
	for (int i = 0; i < 5; i++) {
		*(ptr+i) +=5;
	}

	//Print the modified array
	printf("Modified array: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", numbers[i]);
	}
	printf("\n");

	return 0;
}

//Write a C program to find the largest element in an array.

#include<stdio.h>

int main() {
	int arr[5] = { 1, 2, 33, 4, 5 };
	int largest = arr[0];
	for (int i = 1; i < 5; i++) {
		if (arr[i] > largest) {
			largest = arr[i];
		}
	}
	printf("Largest element in the array: %d", largest);
	
	return 0;
}
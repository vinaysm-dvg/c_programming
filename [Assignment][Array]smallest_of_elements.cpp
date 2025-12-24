//Write a C program to find the smallest element in an array.

#include<stdio.h>

int main() {
	int arr[5] = { 15, 2, 33, 4, 5 };
	int smallest = arr[0];
	for (int i = 1; i < 5; i++) {
		if (arr[i] < smallest) {
			smallest = arr[i];
		}
	}
	printf("Smallest element in the array: %d", smallest);

	return 0;
}
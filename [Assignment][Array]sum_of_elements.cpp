//Write a C program to find the sum of all elements in an array.

#include<stdio.h>

int main() {
	int arr[5] = { 1, 2, 3, 4, 5 }, sum=0;
	for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}
	printf("Sum of all elements in the array: %d", sum);
	
	return 0;
}
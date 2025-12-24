//Write a C program to sort an array in ascending order using Bubble Sort.

#include<stdio.h>

int main() {
	int arr[5] = {3,1,2,5,4};
	int n = 5;
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n-i-1; j++) {
			if (arr[j] > arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("Sorted array in ascending order: \n");
	for (int x = 0; x < n; x++) {
		printf("%d,", arr[x]);
	}
	return 0;
}

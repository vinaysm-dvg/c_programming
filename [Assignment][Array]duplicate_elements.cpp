//Write a C program to find the duplicate elements in an array.

#include<stdio.h>
int main() {
	int arr[7] = { 1, 2, 3, 4, 2, 5, 3 };
	int n = sizeof(arr) / sizeof(int);
	printf("Duplicate elements in the array: ");
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] == arr[j]) {
				printf("%d,", arr[i]);
			}
		}
	}
	return 0;
}
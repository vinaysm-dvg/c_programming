//Write a C program to find the second largest element in an array.

#include<stdio.h>

int main() {
	int arr[5] = {3,1,2,5,4};
	int n = sizeof(arr)/sizeof(int);
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n-i-1; j++) {
			if (arr[j] > arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("The second largest element in the array: %d", arr[n-2]);
	
	return 0;
}

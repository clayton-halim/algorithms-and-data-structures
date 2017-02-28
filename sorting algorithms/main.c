#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void print_array(int arr[], int len);

int main(int argc, char *argv[]) {
	int len = argc - 1;
	int arr[len];

	for (int i = 0; i < len; ++i) {
		arr[i] = atoi(argv[i + 1]);
	}

	printf("Original array: ");
	print_array(arr, len);
	printf("Length of array: %d\n", len);

	selection_sort(arr, len);
	printf("Sorted array: ");
	print_array(arr, len);
}

void print_array(int arr[], int len) {
	for (int i = 0; i < len - 1; ++i) {
		printf("%d ", arr[i]);
	}
	
	printf("%d\n", arr[len - 1]);
}
#include <stdio.h>
#include "sort.h"

void print_array(int arr[], int len);

int main(void) {
	int lst[] = {6, 5, 4, 3, 3, 2, 1};
	//int lst[] = {2, 1};
	int len = sizeof(lst) / sizeof(lst[0]);
	printf("Original array: ");
	print_array(lst, len);
	printf("Length of array: %d\n", len);

	merge_sort(lst, len);
	printf("Sorted array: ");
	print_array(lst, len);
}

void print_array(int arr[], int len) {
	for (int i = 0; i < len - 1; ++i) {
		printf("%d ", arr[i]);
	}
	
	printf("%d\n", arr[len - 1]);
}
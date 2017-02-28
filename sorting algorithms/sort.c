#include "sort.h"

void bubble_sort(int arr[], int len) {
	for (int i = 0; i < len; ++i) {
		for (int j = len - 1; j >= i; --j) {
			if (arr[j] < arr[j - 1]) {
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}
}

void insertion_sort(int arr[], int len) {
	for (int i = 1; i < len; ++i) {
		int key = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			--j;
		}

		arr[j + 1] = key;
	}
}

static void merge(int arr[], int len1, int len2) {
	int cpy1[len1];
	int cpy2[len2];

	for (int i = 0; i < len1; ++i) {
		cpy1[i] = arr[i];
	}


	for (int i = len1, j = 0; i < (len1 + len2); ++i, ++j) {
		cpy2[j] = arr[i];
	}

	int cpy1_i = 0;
	int cpy2_j = 0;
    int k = 0;

	while (cpy1_i < len1 && cpy2_j < len2) {
		if (cpy1[cpy1_i] <= cpy2[cpy2_j]) {
			arr[k] = cpy1[cpy1_i];
			++cpy1_i;
		} else {
			arr[k] = cpy2[cpy2_j];
			++cpy2_j;
		}

		++k;
	}

	// Copy any remaining in 1st array
	while (cpy1_i < len1) {
		arr[k] = cpy1[cpy1_i];
		++cpy1_i;
		++k;
	}

	// Copy any remaining in 2nd array
	while (cpy2_j < len2) {
		arr[k] = cpy2[cpy2_j];
		++cpy2_j;
		++k;
	}
}

void merge_sort (int arr[], int len) {
	if (len > 1) {
		int len1 = len / 2;
		int len2 = len - len1;

		merge_sort(arr, len1);
		merge_sort(arr + len1, len2);

		merge(arr, len1, len2);
	}
}

void selection_sort(int arr[], int len) {
	for (int i = 0; i < len; ++i) {
		int min = i;
		for (int j = i + 1; j < len; ++j) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		swap(&arr[i], &arr[min]);
	}
}

static void swap(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

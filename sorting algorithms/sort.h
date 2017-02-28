#ifndef SORT_H
#define SORT_H

void bubble_sort(int arr[], int len);
void insertion_sort(int arr[], int len);
static void merge(int arr[], int len1, int len2);
void merge_sort (int arr[], int len);
void selection_sort(int arr[], int len);
static void swap(int *x, int *y);

#endif // SORT_H
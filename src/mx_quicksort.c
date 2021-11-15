#include "libmx.h"

static int partition(int *arr, int left, int right, int *swaps) {
	int tmp;
	int rt = right;
	int lt = left;
	int pivot = arr[right];

	while (lt < rt) {
		while (arr[lt] < pivot) lt++;
		while (arr[rt] >= pivot  && rt > left) rt--;
		if (lt < rt) {
			tmp = arr[lt];
			arr[lt] = arr[rt];
			arr[rt] = tmp;
			(*swaps)++;
		}
	}
	if (arr[right] < arr[lt]) {
		tmp = arr[lt];
		arr[lt] = arr[right];
		arr[right] = tmp;
		(*swaps)++; 
	}
	return rt; // as the most rightest 
}

int mx_quicksort(int *arr, int left, int right) {
	int swaps = 0;
	int pivot;
	if (arr == NULL) {
		return -1;
	}
	if (left < right) {
		pivot = partition(arr, left, right, &swaps);
		swaps += mx_quicksort(arr, left, pivot);
		swaps += mx_quicksort(arr, pivot + 1 , right);
	}
	return swaps;
}

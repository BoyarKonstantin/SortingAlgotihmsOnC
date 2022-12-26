#include <stdio.h>

void bubbleSort(int array[], int size) {
	for (int step = 0; step < size - 1; ++step) {
		for (int i = 0; i < size - step - 1; ++i) {
			if (array[i] > array[i + 1]) {
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}
	for (int i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}

// function to swap the the position of two elements
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int array[], int size) {
	for (int step = 0; step < size - 1; step++) {
		int min_idx = step;
		for (int i = step + 1; i < size; i++) {

			if (array[i] < array[min_idx])
				min_idx = i;
		}

		// put min at the correct position
		swap(&array[min_idx], &array[step]);
	}
	for (int i = 0; i < size; ++i) {
		printf("%d ", array[i]);
	}
	printf("\n");
}
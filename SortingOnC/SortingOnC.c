#include <stdio.h>
#include "Sort.h"
//In this project I wanna implement some algorithms on C language programming
int main() {
	int array[] = { 1,4,5,3,22,8,9 };
	int size = 7;
	bubbleSort(array, size);
	selectionSort(array, size);
	return 0;
}
#include <iostream>
using namespace std;

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int arr[5] = { 2, 7, 3, 4, 1 };
	int a, minIdx, min;

	for (int i = 0; i < 4; i++) {
		min = arr[i];
		for (int j = i + 1; j < 5; j++) {
			if (min > arr[j]) {
				min = arr[j];
				minIdx = j;
			}
		}
		if(min != arr[i]) swap(&arr[i], &arr[minIdx]);
	}
	
	return 0;
}

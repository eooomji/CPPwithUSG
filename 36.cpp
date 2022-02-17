#include <iostream>
using namespace std;

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int arr[101], n, num, idx;
	cin >> n;

	for (int i = 0; i < n; i++) cin >> arr[i];

	for (int i = 1; i < n; i++) {
		idx = i;
		for (int j = i - 1; j >= 0; j--) {
			if (arr[j] > arr[idx]) {
				swap(&arr[idx], &arr[j]);
				idx = j;
			}
		}
	}

	return 0;
}

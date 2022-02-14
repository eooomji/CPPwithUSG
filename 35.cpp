// 음의 정수는 입력순대로, 양의 정수는 정렬 ~~
#include <iostream>
using namespace std;

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int arr[101], bsort[101], n, un = 0;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] < 0) bsort[un++];
	}

	for (int i = n - 1; i >= un; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) swap(&arr[j], &arr[j + 1]);
		}
	}

	for (int i = un; i < n; i++) bsort[i] = arr[i];
	return 0;
}

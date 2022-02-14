// 3등한 학생의 수학성적 출력 (ex, 100점 96점 96점 92점 있으면 92점이 3등)
#include <iostream>
using namespace std;

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int arr[100];
	int n, a, maxInx, max, cnt = 1;

	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	for (int i = 0; i < n - 1; i++) {
		max = arr[i];
		for (int j = i + 1; j < n; j++) {
			if (max < arr[j]) {
				max = arr[j];
				maxInx = j;
			}
		}
		if (max != arr[i]) swap(&arr[i], &arr[maxInx]);
	}
	for (int i = 1; i < n; i++) {
		if (arr[i] != arr[i - 1]) cnt++;
		if (cnt == 3) { cout << arr[i]; break; }
	}
	return 0;
}

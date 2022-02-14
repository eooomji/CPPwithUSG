// 온도 수(n)와 온도가 주어질 때, k일의 온ㄴ도 합이 최대가 되는 값 출력
#include <iostream>
using namespace std;

int main() {
	int arr[100001], n, k, sum = 0, max;
	cin >> n >> k;

	for (int i = 0; i < n; i++) cin >> arr[i];
	for (int i = 0; i < k; i++) sum += arr[i];

	max = sum;
	for (int i = k; i < n; i++) {
		sum = sum + arr[i] - arr[i - k];
		if (max < sum) max = sum;
	}

	cout << max;
	return 0;
}

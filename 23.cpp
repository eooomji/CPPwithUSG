// 연속적으로 증가하는 부분 수열의 최대 길이 구하기
#include <iostream>
using namespace std;

int main() {
	int arr[100001] = { 0 }, n, max = 0, sum, cnt = 0, len;
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> arr[i];

	sum = arr[0];
	for (int i = 1; i <= n; i++) {
		if (arr[i] >= arr[i - 1]) {
			sum += arr[i];
			cnt++;
		}
		else {
			if (sum > max) {
				max = sum;
				len = cnt;
			}
			sum = arr[i]; cnt = 1;
		}
	}
	cout << len;
	return 0;
}

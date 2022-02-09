// 자연수 N이 주어지면 자연수 N의 진약수의 합을 수식과 함께 출력
#include <iostream>
using namespace std;

int main() {
	int n, sum = 0, idx = 0, arr[100] = { 0 };
	cin >> n;

	for (int i = 1; i <= 20; i++) {
		if (n % i == 0) {
			arr[idx++] = i;
		}
	}

	for (int i = 0; i < idx - 1; i++) {
		cout << arr[i] << '+';
		sum += arr[i];
	}
	cout << arr[idx - 1] << '=' << sum;
	return 0;
}

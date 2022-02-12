// 각 자리수의 합을 구하고, 그 합이 최대인 자연수 출력. 만약 합이 최대인 수가 여러개일 경우, 더 큰 수를 출력 
#include <iostream>
#include <string.h>
using namespace std;

int digit_sum(int x) {
	int sum = 0, s;
	while (x > 0) {
		s = x % 10;
		sum += s;
		x /= 10;
	}
	return sum;
}

int main() {
	int n, p[100], len, num[100], idx = 0, max;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num[i];
		p[idx++] = digit_sum(num[i]);
	}

	max = p[0];
	for (int i = 1; i < n; i++) {
		if (p[i] > max) {
			max = p[i];
			idx = i;
		}
		else if (p[i] == max) {
			if (num[i] > num[idx]) idx = i;
		}
	}
	cout << num[idx];
	return 0;
}

// N!을 소수 2, 3, 5, 7, 9 ... 곱의 수로 나타내어라
#include <iostream>
using namespace std;

int arr[1001] = { 0 }, v[1001] = { 0 };

int fun(int n) {
	int tmp = n;
	for (int i = 2; i <= n; i++) {
		while (tmp != 1) {
			if (arr[i] == 0 && tmp % i == 0) {
				tmp /= i;
				v[i]++;
				if (tmp == 1) return i;
			}
			else break;
		}
		if (tmp == 1) return i;
	}
}

int main() {
	int n, idx, num = 1;
	for (int i = 2; i < 1001; i++) {
		for (int j = 2; i * j < 1001; j++)  arr[i * j] = 1;
	}

	cin >> n;

	for (int i = n; i > 0; i--) num *= i;
	idx = fun(num);

	cout << n << '!' << " =";
	for (int i = 2; i <= idx; i++) {
		if(arr[i] == 0) cout << ' ' << v[i];
	}
	return 0;
}

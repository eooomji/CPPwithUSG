// 1부터 n까지 소수의 개수 출력
#include <iostream>
using namespace std;

int main() {
	int n, arr[200001] = { 0 }, cnt = 0;
	for (int i = 2; i < 200001; i++) {
		for (int j = 2; i * j < 200001; j++) arr[i * j] = 1;
	}
	cin >> n;
	for (int i = 2; i <= n; i++) {
		if (arr[i] == 0) cnt++;
	}
	cout << cnt;
	return 0;
}

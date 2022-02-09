// 자연수 N이 입력되면, 1부터 N까지의 수 중 M의 배수 합을 출력
#include <iostream>
using namespace std;

int main() {
	int n, m, sum = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		if (i % m == 0) sum += i;
	}
	cout << sum;
	return 0;
}

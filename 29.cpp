// 1부터 N까지의 자연수를 종이에 적을 때, 각 숫자 중 3의 개수가 몇 개 있는지 출력 (ex, 13은 1, 3으로 구분)
#include <iostream>
using namespace std;

int main() {
	int n, cnt = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int tmp = i;
		while (tmp > 0) {
			if (tmp % 10 == 3) cnt++;
			tmp /= 10;
		}
	}
	cout << cnt;
	return 0;
}

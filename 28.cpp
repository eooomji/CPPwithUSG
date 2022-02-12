// N!의 값에서 일의 자리부터 연속적인 0의 개수 구하기
#include <iostream>
using namespace std;

int main() {
	int n, num = 1, tmp, j, a = 0, b = 0;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		tmp = i;
		j = 2;
		while (1) {
			if (tmp % j == 0) {
				if (j == 2) a++;
				else if (j == 5) b++;
				tmp /= j;
			}
			else j++;
			if (tmp == 1) break;
		}
	}
	if (a < b) cout << a;
	else cout << b;

	return 0;
}

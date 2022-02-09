// 1부터 N까지 숫자는 몇 개 사용되었는지 출력 (자릿수로)
#include <iostream>
using namespace std;

int main() {
	int n, cnt = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i < 10) cnt++;
		else if (i < 100) cnt += 2;
		else if (i < 1000) cnt += 3;
		else if (i < 10000) cnt += 4;
		else cnt += 5;
	}
	cout << cnt;
	return 0;
}

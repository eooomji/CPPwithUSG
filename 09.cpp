// 1부터 N까지 각 숫자들의 약수의 개수 출력
#include <iostream>
using namespace std;

int main() {
	int num[50001] = { 0 }, n;

	for (int i = 1; i < 50001; i++) {
		num[i]++;
		for (int j = 1; j < i; j++) {
			if (i % j == 0) num[i]++;
		}
	}
	
	cin >> n;
	for (int i = 1; i <= n; i++) cout << num[i] << ' ';

	return 0;
}

// n명의 나이가 입력되고, 이 중 나이 차이가 가장 많이 나는 경우 출력
#include <iostream>
using namespace std;

int main() {
	int n, min, max, age[101];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> age[i];
	min = max = age[0];
	for (int i = 1; i < n; i++) {
		if (age[i] > max) max = age[i];
		else if (age[i] < min) min = age[i];
	}
	cout << max - min;
	return 0;
}

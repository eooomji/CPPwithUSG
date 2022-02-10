// 사람 수(n), 앉은 키 정보(height[101])가 주어지면, 뒷사람 모두의 시야를 가려 영화 시청이 불가능하게 하는 분노유발자가 몇 명 있는지 출력
#include <iostream>
using namespace std;

int main() {
	int n, height[101] = { 0 }, max, num = 0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> height[i];

	for (int i = 0; i < n - 1; i++) {
		max = height[i];
		for (int j = i + 1; j < n; j++) {
			if (height[j] > max) max = height[j];
		}
		if (max == height[i]) num++;
	}

	cout << num;
	return 0; 
}

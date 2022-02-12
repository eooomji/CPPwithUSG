// 선수들의 평소 실력을 현재 달리고 있는 순서대로 입력 받아서 각 선수의 최선의 등수 계산
#include <iostream>
using namespace std;

int main() {
	int n, arr[10000], grade[10000] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		grade[i] = 1;
	}
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (i != j && arr[i] < arr[j]) grade[i]++;
		}
	}
	for (int i = 0; i < n; i++) cout << grade[i] << ' ';
	return 0;
}

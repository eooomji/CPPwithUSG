// 서로 인접해있는 두 수의 차가 1에서 N-1까지의 값을 모두 가지면 그 수열은 유쾌한 점퍼이다. 유쾌한 점퍼인지 판단하는 프로그램
#include <iostream>
using namespace std;

int main() {
	int arr[100] = { 0 }, v[100] = { 0 }, n, tmp;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	for (int i = 1; i < n; i++) {
		tmp = arr[i] - arr[i - 1] > 0 ? arr[i] - arr[i - 1] : -(arr[i] - arr[i - 1]);
		v[tmp] = 1;
	}
	for (int i = 1; i < n; i++) {
		if (v[i] == 0) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0; 
}

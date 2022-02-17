// 배열 a, b의 원소를 오름차순으로 정렬한 배열 arr 출력
#include <iostream>
using namespace std;

int main() {
	int n, m, a[101], b[101], c = 0, d = 0, arr[201], idx = 0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	cin >> m;
	for (int i = 0; i < m; i++) cin >> b[i];

	while (1) {
		if (c == n && d == m) break;
		else if (c == n && d != m) {
			for (int i = d; i < m; i++) arr[idx++] = b[d++];
		}
		else if (c != n && d == m) {
			for (int i = c; i < n; i++) arr[idx++] = a[c++];
		}
		else {
			if (a[c] < b[d]) arr[idx++] = a[c++];
			else if (a[c] > b[d]) arr[idx++] = b[d++];
			else {
				arr[idx++] = a[c++];
				arr[idx++] = b[d++];
			}
		}
	}
	return 0;
}

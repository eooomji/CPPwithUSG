// 귀찮아서 구현 다 안 함 ㅎㅎ
#include <iostream>
using namespace std;
int m[11], num[11], v[101] = { 0 }, s, n, idx;

int main() {
	cin >> s >> n;
	for (int i = 0; i < n; i++) cin >> num[i];
	for (int j = 0; j < s; j++) {
		m[s - 1 - j] = num[j];
		v[num[j]] = 1;
	}
	for (int i = s; i < n; i++) {
		if (v[num[i]] == 1) {
			for (int j = 0; j < s; j++) {
				if (m[j] == num[i]) idx = j;
			}
			for (int j = idx; j > 0; j--) m[j] = m[j-1];
			m[0] = num[i];
		}
		else {
			v[m[s - 1]] = 0;
			for (int j = s - 2; j >= 0; j--) m[j + 1] = m[j];
			m[0] = num[i];
		}
		v[num[i]] = 1;
	}
	return 0;
}

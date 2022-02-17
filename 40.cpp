#include <iostream>
using namespace std;

int main() {
	int n, m, num, v[30001] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		v[num]++;
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> num;
		v[num]++;
	}
	for (int i = 1; i < 30001; i++) {
		if (v[i] == 2) cout << i << ' ';
	}
	return 0;
}

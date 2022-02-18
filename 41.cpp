// a = 15
// 출1 : 7 + 8 = 15
// 출2 : 4 + 5 + 6 = 15
// 출3 : 1 + 2 + 3 + 4 + 5 = 15
// 출4 : 3 (cnt)
#include <iostream>
using namespace std;

int main() {
	int a, b = 1, cnt = 0, tmp, r;
	cin >> a;
	tmp = a--;

	while (a > 0) {
		b++;
		a -= b;
		if (a % b == 0) {
			for (int i = 1; i < b; i++) {
				r = (a / b) + i;
				cout << r << " + ";
			}
			cout << r + 1 << " = " << tmp << endl;
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}

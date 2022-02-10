// 숫자가 더 높은 사람이 +3점, 같으면 둘 다 +1점씩 얻음. 10라운드까지 승패가 결정되면 그 사람의 승, 점수가 같으면 동점되기 직전의 점수가 높은 사람이 승
#include <iostream>
using namespace std;

int main() {
	int a[10], b[10], c[10] = { 0 }, acnt = 0, bcnt = 0;

	for (int i = 0; i < 10; i++) cin >> a[i];
	for (int i = 0; i < 10; i++) cin >> b[i];
	for (int i = 0; i < 10; i++) {
		if (a[i] > b[i]) acnt += 3;
		else if (a[i] < b[i]) bcnt += 3;
		else {
			acnt++;
			bcnt++;
		}
		if (acnt == bcnt) c[i] = 1;
	}
	if (acnt > bcnt) cout << 'A';
	else if (acnt < bcnt) cout << 'B';
	else {
		for (int i = 9; i > 0; i--) {
			if (c[i] == 0) {
				if (acnt > bcnt) cout << 'A';
				else cout << 'B';
				return 0;
			}
		}
	}
	return 0; 
}

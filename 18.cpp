// 아파트 세대 수(n), 층간소음 측정치(m), 층간소음 측정값(time[100])이 주어졌을 때, 최대 연속으로 경보음이 울린 시간 구하기
#include <iostream>
using namespace std;

int main() {
	int n, m, time[100], cnt[100], max;
	cin >> n >> m;

	for (int i = 0; i < n; i++) cin >> time[i];
	for (int i = 0; i < n; i++) {
		if (time[i] > m) cnt[i + 1] = cnt[i] + 1;
		else cnt[i + 1] = 0;
	}

	max = cnt[0];
	for (int i = 1; i <= n; i++) {
		if (cnt[i] > max) max = cnt[i];
	}

	if (max == 0) cout << "-1";
	else cout << max;

	return 0; 
}

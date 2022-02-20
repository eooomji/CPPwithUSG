// n : 8, k : 3인 경우
// 1 2 3 4 5 6 7 8 의 왕자가 있음. 순서대로 번호를 부르다가 k(3)이 걸리면 공주 구할  수 있는 왕자 명단에서 빠짐
// 즉, 3이 첫 번째로 탈락. 4부터 다시 1, 2, 3 { ... } 마지막에 남는 건 7
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, k, idx = 0, cnt = 0, p = 0;
	scanf("%d %d", &n, &k);
	vector<int> king(n + 1);

	while (p < n-1) {
		idx++;
		if (idx > n) idx = 1;
		if (king[idx] == 0) {
			cnt++;
			if (cnt == k) {
				king[idx] = 1;
				cnt = 0; p++;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		if (king[i] == 0) {
			printf("\nking :  %d", i);
			break;
		}
	}

	return 0;
}

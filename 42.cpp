#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, num, tmp, l = 0, r, m;
	scanf("%d %d", &n, &num);
	
	vector<int> arr;
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &tmp);
		arr.push_back(tmp);
	}
	sort(arr.begin(), arr.end());
	
	r = n - 1;
	while (l <= r) {
		m = (l + r) / 2;
		if (arr[m] == num) {
			printf("%d", m + 1);
			return 0;
		}
		else if (arr[m] > num) r = m - 1;
		else l = m + 1;
	}
	return 0;
}

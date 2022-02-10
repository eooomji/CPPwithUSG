// n명의 학생, 1부터 num까지의 합이 학생이 말한 답(answer)과 일치 여부 판단
#include <iostream>
using namespace std;

int main() {
	int n, num, answer, sum;
	cin >> n;
	while (n--) {
		cin >> num >> answer;
		sum = 0;
		for (int i = 1; i <= num; i++) sum += i;
		if (sum == answer) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}

// 올바른 괄호이면 YES, 올바르지 않으면 NO 출력
#include <iostream>
using namespace std;

int main() {
	char str[31];
	int cnt = 0;
	cin >> str;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == '(') cnt++;
		else cnt--;
	}
	if (cnt != 0) cout << "NO";
	else cout << "YES";
	return 0;
}

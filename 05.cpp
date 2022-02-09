// 주민등록번호가 주어지면, 나이와 성별 출력
#include <iostream>
using namespace std;

int main() {
	char n[15], s;
	int age;
	cin >> n;
	
	age = 122 - 10 * (n[0] - '0') - (n[1] - '0') + 1;
	if (n[7] == '3' || n[7] == '4') age -= 100;

	if (n[7] == '1'|| n[7] == '3') s = 'M';
	else s = 'W';

	cout << age << ' ' << s;
	return 0;
}

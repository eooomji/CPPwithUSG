// 문자, 숫자가 섞여있는 문자열에서 숫자만 추출해 자연수를 만들고, 그 자연수와 자연수의 약수의 개수를 출력
#include <iostream>
using namespace std;

int main() {
	char str[50], numArr[10];
	int n, idx = 0, num = 0, cnt = 0;
	cin >> str;

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= '0' && str[i] <= '9') numArr[idx++] = str[i];
	}
	
	for (int i = 0; i < idx; i++) {
		n = numArr[i] - '0';
		int j = idx - i - 1;
		if(j != 0) {
			while (j--) n *= 10;
		}
		num += n;
	}
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) cnt++;
	}

	cout << num << endl << cnt;
	return 0;
}

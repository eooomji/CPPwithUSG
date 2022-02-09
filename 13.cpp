// N자리의 자연수가 입력되면, 입력된 자연수의 자릿수 중 가장 많이 사용된 숫자 출력
#include <iostream>
using namespace std;

int main() {
	char num[101];
	int arr[10] = { 0 }, max;
	cin >> num;

	for (int i = 0; num[i] != '\0'; i++) arr[num[i] - '0']++;
	max = arr[0];
	for (int i = 1; i < 10; i++) {
		if (arr[i] > max) max = i;
	}
	cout << max;
	return 0;
}

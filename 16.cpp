// 두 문자열의 구성이 일치하는지 판단
#include <iostream>
using namespace std;

char str1[101], str2[101], alpha[60] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int num1[60] = { 0 }, num2[60] = { 0 };

void fun(char s[101], int n[60]) {
	for (int i = 0; s[i] != '\0'; i++) {
		for (int j = 0; j < 53; j++) {
			if (s[i] == alpha[j]) n[j]++;
		}
	}
}

int main() {
	cin >> str1 >> str2;
	fun(str1, num1);
	fun(str2, num2);
	for (int i = 0; i < 53; i++) {
		if (num1[i] != num2[i]) {
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}

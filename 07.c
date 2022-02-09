// 띄어쓰기와 대소문자가 혼합되어있는 문자열을, 공백 제거하고 소문자화 시켜서 출력
#include <stdio.h>

int main() {
	char str[101];
	gets(str);
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] != ' ') {
			if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
			printf("%c", str[i]);
		}
	}
	return 0;
}

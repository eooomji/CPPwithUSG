// Inversion Sequence : 1부터 n까지 각각의 수 앞에 놓여 있는 자신보다 큰 수들의 개수를 수열로 표현한 것
// OS : 4 8 6 2 5 1 3 7 
// 1 앞에 놓인 1보다 큰 수는 5개 (4, 8, 6, 2, 5)
// 2 앞에 놓인 2보다 큰 수는 3개 (4, 8, 6)
// 따라서, OS의 IS는 5 3 4 0 2 1 1 0이 된다. IS가 주어졌을 때, OS를 출력하라
#include <iostream>
using namespace std;
int IS[101], OS[101] = { 0 }, n, num;

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> IS[i];
	for (int i = n; i > 0; i--) {
		num = IS[i];
		for (int j = i; j < i + num; j++) OS[j] = OS[j + 1];
		OS[i + num] = i;
	}
	return 0;
}

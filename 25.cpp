// N명 학생의 수학 점수가 입력되면, 각 학생의 석차를 입력한 순서대로 출력하는 프로그램
#include <iostream>
using namespace std;

int main() {
	int n, arr[100], grade[100] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		grade[i] = 1;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i != j && arr[i] < arr[j]) grade[i]++;
		}
	}
	for (int i = 0; i < n; i++) cout << grade[i] << ' ';
	return 0; 
}

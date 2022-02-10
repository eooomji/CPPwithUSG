// 가위 바위 보 @~@
#include <iostream>
using namespace std;

int main() {
	int n, a[101], b[101];
	cin >> n;
	
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];

	for (int i = 0; i < n; i++) {
		if (a[i] == b[i]) cout << 'D' << endl;
		else if ((a[i] == 1 && b[i] == 3) || (a[i] == 2 && b[i] == 1) || (a[i] == 3 && b[i] == 2)) cout << 'A' << endl;
		else cout << 'B' << endl;
	}

	return 0; 
}

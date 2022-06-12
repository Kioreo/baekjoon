#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	int A, B, C;
	int max_n = 0;

	cin >> A >> B >> C;

	if (A == B && B == C) {
		cout << 10000 + A * 1000;
	}
	else if (A == B || A == C) {
		cout << 1000 + A * 100;
	}
	else if (B == C) {
		cout << 1000 + B * 100;
	}
	else {
		max_n = max(A, max(B, C));
		cout << max_n * 100;
	}
	return 0;
}
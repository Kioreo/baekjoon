#include <iostream>

using namespace std;

int main() {
	int A, B, C;

	cin >> A >> B;
	cin >> C;

	if ((B + C) / 60 != 0) {
		A += (B + C) / 60;
		B = (B + C) % 60;
		if (A > 23) {
			A -= 24;
		}
	}
	else {
		B += C;
	}

	cout << A << " " << B;
}
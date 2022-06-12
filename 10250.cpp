#include <bits/stdc++.h>

using namespace std;

int main() {
	int N, H, W, F;
	int HA, WA;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> H >> W >> F;

		if (F % H == 0) {
			HA = H;
			WA = F / H;
		}
		else {
			HA = F % H;
			WA = (F / H) + 1;
		}
		if (WA / 10 == 0) {
			cout << HA << 0 << WA << '\n';
			continue;
		}
		cout << HA << WA << '\n';
	}
	return 0;
}
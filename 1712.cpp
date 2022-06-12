#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
	ll  A, B, C;
	cin >> A >> B >> C;
	if (B >= C) {
		cout << -1;
	}
	else {
		cout << A / (C - B) + 1;
	}
	return 0;
}
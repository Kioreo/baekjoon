#include <bits/stdc++.h>
#define MAX 1001

using namespace std;

int N;
int arr[1001] = { 0, };
vector<int> nums;

void input() {
	cin >> N;
	nums.resize(N);

	for (int i = 0; i < N; i++) {
		cin >> nums[i];
	}
}

void solution()  {
	int cnt = 0;
	for (int i = 1; i < MAX; i++) {
		for (int j = 0; j < N; j++) {
			if (nums[j] % i == 0) {
				arr[nums[j]]++;
			}
		}
	}

	for(int i = 0; i < N; i++) {
		if (arr[nums[i]] == 2) {
			cnt++;
		}
	}
	cout << cnt;
}

void solve() {
	input();
	solution();
}

int main() {
	solve();
	return 0;
}
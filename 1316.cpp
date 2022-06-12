#include<bits/stdc++.h>

using namespace std;

int N;
int word_chk[27] = { 0, };
vector<string> word;

void input() {
	cin >> N;
	word.resize(N);

	for (int i = 0; i < N; i++) {
		cin >> word[i];
	}
}

void solution() {
	char last;
	int idx, cnt = N;

	string n_word;
	for (int i = 0; i < N; i++) {
		n_word = word[i];
		
		for (int j = 0; j < word[i].length(); j++) {
			idx = int(n_word[j]) - 97;
			if (j == 0) {
				last = n_word[j];
				word_chk[idx]++;
				continue;
			}
			if (last == n_word[j]) {
				last = n_word[j];
				continue;
			}
			if (last != n_word[j]) {
				last = n_word[j];
				if (word_chk[idx] > 0) {
					cnt--;
					break;
				}
				word_chk[idx]++;
			}
		}
		for (int j = 0; j < 27; j++) {
			word_chk[j] = 0;
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
}

/*
3
happy
new
year
*/
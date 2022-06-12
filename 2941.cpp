#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<string> crotia = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	string s;
	int idx;

	cin >> s;
	for (int i = 0; i < crotia.size(); i++) {
		while (1) {
			idx = s.find(crotia[i]);
			if (idx == string::npos) break;
			s.replace(idx, crotia[i].length(), "#");
		}
	}
	cout << s.length();
	return 0;
}
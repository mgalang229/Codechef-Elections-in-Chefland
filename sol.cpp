#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int xa, xb, xc;
		cin >> xa >> xb >> xc;
		// make sure there is only 1 party with greater than 50 votes
		int cnt = 0;
		string ans = "";
		if (xa > 50) {
			cnt++;
			ans = "A";
		}
		if (xb > 50) {
			cnt++;
			ans = "B";
		}
		if (xc > 50) {
			cnt++;
			ans = "C";
		}
		cout << (cnt == 1 ? ans : "NOTA") << '\n';
	}
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

void decode() {
	int n;
	cin >> n;
	int sum = 0, x;
	for(int i = 0; i < n; ++i) {
		cin >> x;
		sum += x;
	}
	cout << (sum + n - 1) / n << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}

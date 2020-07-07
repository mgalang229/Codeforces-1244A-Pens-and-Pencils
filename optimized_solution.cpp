#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int a, b, c, d, k;
	cin >> a >> b >> c >> d >> k;
	int x = (a + c - 1) / c;
	int y = (b + d - 1) / d;
	if(x + y > k) cout << -1;
	else cout << x << " " << y;
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T;
	cin >> T;
	while(T--) {
		test_case();
	}
	return 0;
}

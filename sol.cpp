#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int a, b, c, d, k;
	cin >> a >> b >> c >> d >> k;
	int x = 0, y = 0;
	if(a % c == 0) x = a / c;
	else x = a / c + 1;
	if(b % d == 0) y = b / d;
	else y = b / d + 1;
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

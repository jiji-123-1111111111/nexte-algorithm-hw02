#include <iostream>
#include <vector>
using namespace std;
int main () {
	int n,q;
	cin >> n >> q;
	vector<long long> sum(n + 1, 0);
	for(int i = 1;i <= n; ++i) {
		long long x;
		cin >> x;
		sum[i] = sum[i - 1] + x ;
	}
	while (q--) {
		int l, r;
		cin >> l >> r;
		cout << sum[r] - sum[l - 1] << endl;
	}
	cout << endl;
	return 0;
}


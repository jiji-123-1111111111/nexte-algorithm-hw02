#include <iostream>
#include <set>
using namespace std;
int main() {
	int n;
	cin >> n;
	set<int> s;
	for(int i = 0;i < n;i++){
		int x;
		cin >> x;
		s.insert(x);
	}
	cout << s.size() << endl;
	bool first = true;
	for (int x : s) {
		if (!first)cout  << " ";
		cout << x;
		first = false;
	}
	cout << endl;
	cout << endl;
	return 0 ;
}


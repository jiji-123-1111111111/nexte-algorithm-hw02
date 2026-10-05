#include <iostream>
#include <algorithm>
using namespace std;
int main() {
		int  n;
		cin >> n;
	int current = 0;
	int max_len = 0;
	for (int i = 0;i < n; ++i){
		int x;
		cin >> x;
		if(x == 1){
			current++;}else{max_len = max(max_len , current);
				current = 0;}
	}
	max_len = max(max_len , current);
	cout << max_len << endl;
	cout << endl;
	return 0 ;
}


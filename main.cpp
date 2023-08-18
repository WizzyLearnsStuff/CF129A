#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int odd = 0;

	for (int i = 0; i < n; ++i) {
		int b;
		cin >> b;
		odd += b & 1;
	}

	if (odd & 1) {
		cout << odd;
	}
	else {
		cout << n - odd;
	}
}

#include <iostream>
using namespace std;

int main() {
	int max = 0;
	int idx = 0;
	for (int i = 0; i < 9; i++) {
		int input;
		cin >> input;
		if (input > max) {
			max = input;
			idx = i + 1;
		}
	}
	cout << max << "\n";
	cout << idx;
}
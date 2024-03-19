#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	string prt;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			prt += "*";
		}
		prt += "\n";
	}
	cout << prt;
}
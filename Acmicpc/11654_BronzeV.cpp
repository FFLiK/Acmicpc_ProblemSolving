#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	string str;
	cin >> str;
	int num = 0;
	for (int i = 0; i < str.size(); i++) {
		num += str[i] - '0';
	}
	cout << num;
}
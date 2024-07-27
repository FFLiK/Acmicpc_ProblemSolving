#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	int n;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	stack<int> s;
	long long max = 0;
	for (int i = 0; i < n; i++) {
		while (!s.empty() && v[s.top()] > v[i]) {
			long long height = v[s.top()];
			s.pop();
			long long width = i;
			if (!s.empty()) {
				width = i - s.top() - 1;
			}
			if (max < height * width) {
				max = height * width;
			}
		}
		s.push(i);
	}
	while (!s.empty()) {
		long long height = v[s.top()];
		s.pop();
		long long width = n;
		if (!s.empty()) {
			width = n - s.top() - 1;
		}
		if (max < height * width) {
			max = height * width;
		}
	}
	cout << max << "\n";
}
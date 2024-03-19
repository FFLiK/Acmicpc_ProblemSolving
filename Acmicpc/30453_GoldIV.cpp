#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Point {
public:
	int x, y;
};

class Cnt {
public:
	int cnt = 0;
};

int main() {
	int n;
	scanf("%d", &n);
	vector<Point> pts(n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &pts[i].x, &pts[i].y);
	}

	unordered_map<long long int, Cnt> lib;
	int max = 0;
	for (register int i = 0; i < n; i++) {
		for (register int j = i; j < n; j++) {
			long long int doublex = (unsigned int)(pts[i].x + pts[j].x);
			long long int doubley = (unsigned int)(pts[i].y + pts[j].y);
			long long int p = doublex << 32 | doubley;
			lib[p].cnt += 1 + (i != j);
			max = max > lib[p].cnt ? max : lib[p].cnt;
		}
	}

	printf("%d", max);
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	int h, m, s, H, M, S;
	cin >> h >> m >> s >> H >> M >> S;
	cout << S + M * 60 + H * 3600 - s - m * 60 - h * 3600;
	return EXIT_SUCCESS;
}
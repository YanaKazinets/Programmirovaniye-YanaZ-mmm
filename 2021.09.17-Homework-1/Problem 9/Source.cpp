#include <iostream>
using namespace std;

int main() {
	int x;
	cin >> x;
	int a = x * x;
	cout << a * a + a * x + a + x + 1;
	return EXIT_SUCCESS;
}
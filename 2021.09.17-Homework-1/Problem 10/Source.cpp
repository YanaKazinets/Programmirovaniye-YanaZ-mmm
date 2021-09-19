#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	cout << b + (a - b)*((a / b + 3) % (a / b + 2));
	return EXIT_SUCCESS;
}
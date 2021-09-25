#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	cin >> a >> b;

	cout << b + (a - b)*((a / b + 3) % (a / b + 2));

	return EXIT_SUCCESS;
}
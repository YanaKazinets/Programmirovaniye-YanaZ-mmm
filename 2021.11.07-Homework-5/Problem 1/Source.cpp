#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int b1 = 0;
	int b2 = 0;
	cin >> n >> b1 >> b2;

	int vb1 = 0;
	int vb2 = 0;

	vb1 = (n & (1 << b1)) << (b2 - b1);
	vb2 = (n & (1 << b2)) >> (b2 - b1);
	n = n & (~(1 << b1)) & (~(1 << b2)) | vb1 | vb2;

	cout << n << endl;

	return EXIT_SUCCESS;
}
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	cin >> a >> b;
	
	int t = a;
	a = b;
	b = t;
	cout << a << " " << b;
	
	return EXIT_SUCCESS;
}
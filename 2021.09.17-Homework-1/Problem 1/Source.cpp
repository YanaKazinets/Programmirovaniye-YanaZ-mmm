#include <iostream>
using namespace std;

int main() 
{
	int c = 0;
	cin >> c;

	cout << "The next number for the number " << c << " is " << c + 1 << "." << endl;
	cout << "The previous number for the number " << c << " is " << c - 1 << "." << endl;

	return EXIT_SUCCESS;
}
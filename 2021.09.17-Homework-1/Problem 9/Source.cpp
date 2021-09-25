#include <iostream>

using namespace std;

int main(int argc, char* argv[]) 
{
	int x = 0;
	cin >> x;
	
	int a = x * x;
	cout << (a + 1) * (a + x) + 1;
	
	return EXIT_SUCCESS;
}
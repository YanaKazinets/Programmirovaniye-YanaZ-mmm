#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int N = 0;
	cin >> N;
	
	cout << N / 100 + (N % 100) / 10 + N % 10;
	
	return EXIT_SUCCESS;
}
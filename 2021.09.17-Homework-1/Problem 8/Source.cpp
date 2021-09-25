#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int h = 0;
	int m = 0;
	int s = 0;
	int H = 0;
	int M = 0;
	int S = 0;
	cin >> h >> m >> s >> H >> M >> S;

	cout << S + M * 60 + H * 3600 - s - m * 60 - h * 3600;
	
	return EXIT_SUCCESS;
}
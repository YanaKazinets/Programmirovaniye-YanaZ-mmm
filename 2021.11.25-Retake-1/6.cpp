#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n;

	int time = 0;

	for (int i = 1; i < n; i += 2)
	{
		time += 50;
	}
	for (int i = 2; i < n; i += 2)
	{
		time += 60;
	}
	time += 45;

	cout << 9 + (time / 60) << " " << time % 60;
	
	return EXIT_SUCCESS;
}
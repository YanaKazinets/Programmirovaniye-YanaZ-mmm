#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	double t = 0;
	cin >> t;

	unsigned long long* p = (unsigned long long*)&t;
	unsigned long long n = *p;
	
	for (int i = sizeof(double) * 8 - 1; i >=0 ; --i)
	{
		long long ibit = (((long long)1 << i) & n) >> i;
		cout << ibit;
		if ((i) % 4 == 0)
		{
			cout << " ";
		}
	}
	
	return EXIT_SUCCESS;
}
#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n;

	double m = (double)n;
	unsigned long long* p = (unsigned long long*)&m;

	*p = *p & (~((long long)1 << (sizeof(long long)*8 - 1)));

	double* px = (double*)p;
	m = *px;
	n = (int)m;

	cout << n << endl;

	return EXIT_SUCCESS;
}
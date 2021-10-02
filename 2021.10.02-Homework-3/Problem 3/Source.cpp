#include <iostream>

using namespace std;

int sum(int n)
{
	int ret = 0;
	for (int i = 1; i <= n; ++i)
	{
		ret += i;
	}
	return ret;
}

int main(int argc, char* argv[]) {

	int n = 0;
	cin >> n;
	
	int s = 0;
	int num = 0;
	while (s == 0)
	{
		if (n > sum(num) && n <= sum(num + 1))
		{	
			s = num + 1;
		}
		++num;
	}

	int t = 0;

	for (int i = 1; i <= s; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			if (!(t>=n))
			{
				cout << t + 1 << " ";
			}
			++t;
		} 
		cout << endl;
	}

	return EXIT_SUCCESS;
}
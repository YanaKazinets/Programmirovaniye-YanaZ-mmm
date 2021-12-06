#include "myLib.h"

int alg(int n)
{
	int countik = 0;

	while (n != 1)
	{
		if (n % 2 == 0)
		{
			n /= 2;
		}
		else
		{
			n = n * 3 + 1;
		}
		++countik;
	}
	return countik;
}

void circle(int r)
{
	for (int i = 0; i <= 2 * r; ++i)
	{
		for (int j = 0; j <= 2 * r; ++j)
		{
			if ((r - i) * (r - i) + (r - j) * (r - j) <= (r * r + 2) && (r - i) * (r - i) + (r - j) * (r - j) >= (r * r - 1))
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
			
		}
		cout << endl;
	}

}

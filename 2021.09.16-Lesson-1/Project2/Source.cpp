#include <iostream>
#include <clocale>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Vvedite tchisla dlya slozheniya:" << endl;
	cin >> a >> b;
	cout << "Сумма равна: " << a + b << endl;

	return EXIT_SUCCESS;
}
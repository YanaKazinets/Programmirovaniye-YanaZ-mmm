#include <iostream>
#include <clocale>

using namespace std;

int main() {

	setlocale(LC_ALL, "rus");
	int a, b;
	cout << "Введите числа для вычисления остатка:" << endl;
	cin >> a >> b;
	cout << "Остаток от деления равен: " << a % b << endl;
	return EXIT_SUCCESS;

}
#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

int main() {
	int a = (rand() % 20) + (-10);
	int b = (rand() % 20) + (-10);
	cout << "Wylosowana liczba to : " << a << endl;
	cout << "Wylosowana liczba to : " << b << endl;
	int c = a + b;
	int d = a - b;
	int e = a * b;
	int f = a / b;
	int g = a % b;
	cout << "Suma liczb to : " << c << endl;
	cout << "Roznica liczb to : " << d << endl;
	cout << "Iloczyn liczb to : " << e << endl;
	cout << "Iloraz liczb to : " << f << endl;
	cout << "Modulo liczb to : " << g << endl;

	return(0);
}
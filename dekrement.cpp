#include<iostream>
using namespace std;
int main() {
	int a;
	const int c = 10;
	setlocale(LC_ALL, "Rus");
	a = c * 2;
	cout << c << endl;
	cout << a << endl;
	cout << --a << endl;
}
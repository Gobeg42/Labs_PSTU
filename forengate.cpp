#include <iostream>
using namespace std;
int main() {
	int foren;
	double celsi;
	setlocale(LC_ALL, "Rus");
	cout << "¬ведите градусы по ‘аренгейту" << endl;
	cin >> foren;
	celsi =(5./9)*(foren - 32);
	cout << celsi << endl;
	
}
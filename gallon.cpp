#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int gal;
	double futs;
	cout << "¬ведите число галлонов" << endl;
	cin >> gal;
	futs = gal * 7.481;
	cout << futs <<endl ;
}
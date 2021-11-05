#include <iostream>
using namespace std;
int main() {
	char z;
	int hour1, min1, sek1, hour, min, sek, hour2, min2, sek2, fulltime1, fulltime, fulltime2;
	setlocale(LC_ALL, "Rus");
	cout << "Введите начальное время[чч(24):мм:сс]: ";
	cin >> hour1 >> z >> min1 >> z >> sek1;
	cout << "Введите конечное время[чч(24):мм:сс]: ";
	cin >> hour2 >> z >> min2 >> z >> sek2;
	fulltime1 = hour1 * 3600 + min1 * 60 + sek1;
	fulltime2 = hour2 * 3600 + min2 * 60 + sek2;
	fulltime = fulltime2 - fulltime1;
	hour = fulltime / 3600;
	min = fulltime / 60 % 60;
	sek = fulltime % 60;
	cout << "Прошло" ;
	cout << hour << ":" ;
	cout << min << ":" ;
	cout << sek ;

}
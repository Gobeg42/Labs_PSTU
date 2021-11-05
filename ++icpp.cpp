#include<iostream>
using namespace std;
int main() {
	int i = 1, b;
	b = ++i * i++;
	cout << b << endl;
}
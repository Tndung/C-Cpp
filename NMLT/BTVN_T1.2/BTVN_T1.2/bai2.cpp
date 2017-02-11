/*Nhap so keo vao va tra ve ket qua biet so bich va so kep du. Biet 1 bich co 15 vien
*/
#include <iostream>
using namespace std;

void main() {
	int sokeo;
	cout << "Nhap vao so keo: ";
	cin >> sokeo;
	cout << "So bich keo la: " << sokeo / 15;
	cout << "\nSo keo con du la: " << sokeo % 15<< endl;
	system("pause");
}
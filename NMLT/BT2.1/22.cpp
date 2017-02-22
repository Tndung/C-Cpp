#include <iostream>
#include "string"
using namespace std;

void main() {
	float t, l, h;
	cout << "Nhat diem thu tu 3 mon toan li hoa: ";
	cin >> t >> l >> h;
	float dtb = (t * 2 + l + h) / 4;
	char kq[] = (dtb < 5) ? " Rot" : " dau";
	cout << "Ket qua:" << kq <<endl;
	system("pause");
}
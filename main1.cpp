#include"header1.h"
using namespace std;
void main()
{
	int n, a[50];
	cout << "Nhap mang: ";
	cin >> n;
	nhap(n, a);
	xuat(n, a);
	cout << "\nSo phan tu chan la: " << demchan(n, a) << endl;
	xuatsht(n, a);
	vitrile(n, a);
	scpdautien(n, a);
	cout << "\nTrung binh cong cac so chan am la: " << tbcchanam(n, a) <<endl;
	insnt(n, a);
	invitrisnt(n, a);
	cout << "Trung binh cong cac so le duong la: " << tbcleduong(n, a);
	cout << "Tong cac uoc cua 6 là: " << tonguoc6(n, a);
	cout << "Tong cac phan tu o vi tri chan la: " << tongptvitrichan(n, a);
	cout << "Tong cac phan tu la boi cua 2: " << tongboi2(n, a);
	bool kiemtra_am(int n, int a[50]);
}
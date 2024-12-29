#include"header1.h"
using namespace std;
//Viết hàm nhập mảng
void nhap(int& n, int a[50]) 
{
	for (int i = 0; i < n; i++)
	{
		cout << "a["<< i << "]= ";
		cin >> a[i];
	}
}
//Viết hàm xuất mảng
void xuat(int n, int a[50])
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
//Đếm có bao nhiêu phần tử chẵn có trong mảng.
int demchan(int n, int a[50]) 
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			dem++;
		}
	}
	return dem;
}
//Kiemtra so hoan thien
bool sht(int n, int& s)
{
	s = 0;
	if (n <= 0)
		return false;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			s = s + i;
		}
	}
	return s == n;
}
//in ra cac so hoan thien
void xuatsht(int n, int a[50])
{
	int s;
	cout << "So hoan thien la: ";
	for (int i = 0; i < n; i++)
	{
		if (sht(a[i],s))
		{
			cout << a[i] << " " << endl;
		}
	}
}
//4 liệt kê tất cả các vị trí lẻ trong mảng
void vitrile(int n, int a[50]) 
{
	cout << "Cac vi tri le: ";
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 1)
		{
			cout << i << " ";
		}
	}
}
//In ra các scp đầu tiên
void scpdautien(int n, int a[50]) 
{
	cout << "\nSo chinh phuong dau tien: ";
	for (int i = 0; i < n; i++)
	{
		if (sqrt(a[i]) * sqrt(a[i]) == a[i]) 
		{
			cout << a[i];
			break;
		}
	}
}
//Tính trung bình cộng các số chẵn âm
int tbcchanam(int n, int a[50])
{
	int dem = 0;
	int  tong = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[i] < 0) 
		{
			tong += a[i];
			dem++;
		}
	}
	if (dem == 0) return dem;
	double tbc = (static_cast<double>(tong)) / dem;
	return tbc;
}
//In ra số nguyên tố có trong mảng
void insnt(int n, int a[50])
{
	cout << "\Cac so nguyen to co trong mang: ";
	for (int i = 0; i < n; i++)
	{
		if ( a[i] == 2 || a[i] == 3 || a[i] == 5 ) {
			cout << a[i] << " ";
		}
		if (a[i] % 2 != 0 && a[i] % 3 != 0 && a[i] % 5 != 0) {
			cout << a[i] << " ";
		}
	}
}
//In ra vị trí số nguyên tố
void invitrisnt(int n, int a[50])
{
	cout << endl;
	cout << "Cac vi tri có so nguyen to trong mang : ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 2 || a[i] == 3 || a[i] == 5) {
			cout << i << " ";
		}
		if (a[i] % 2 != 0 && a[i] % 3 != 0 && a[i] % 5 != 0) {
			cout << i << " ";
		}
	}
}

//Tính trung bình cộng các số lẻ dương
int tbcleduong(int n, int a[50])
{
	cout << endl;
	int dem = 0;
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 1 && a[i] > 0)
		{
			tong += a[i];
			dem++;
		}
	}
	if (dem == 0) return dem;
	double tbc = tong / dem;
	return tbc;
}
//Tính tổng các phần tử có ước là 6
int tonguoc6(int n, int a[50])
{
	cout << endl;
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		if (6 % a[i] == 0) 
		{
			tong += a[i];
		}
	}
	return tong;
}
//Viết hàm tính tổng các phần tử tại vị trí chẵn.
int tongptvitrichan(int n, int a[50])
{
	cout << endl;
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			tong += a[i];
		}
	}
	return tong;
}
//Viết hàm tính tổng các phần tử dương và là chia hết cho 3 có trong mảng.
//Viết hàm xuất các vị trí các số hoàn thiện có trong mảng.
//Viết hàm tính tổng các phần tử là bội của 2.
int tongboi2(int n, int a[50])
{
	cout << endl;
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			tong += a[i];
		}
	}
	return tong;
}
//Viết hàm kiểm tra trong mảng có giá trị âm hay không? Nếu có trả về true, ngược lại trả về false.
bool kiemtra_am(int n, int a[50])
{
	for (int i = 0; i < n; i++) 
	{
		if (a[i] < 0) return true;
	}
	return false;
}
//Viết hàm đếm các phần tử là bội của số lẻ 5 có trong mảng.
//Viết hàm tính tổng các vị trí chẵn trong mảng.


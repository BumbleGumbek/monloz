#include "Header.h"

void nhapDaySo(DaySo &a)
{
	cout << "Nhap so phan tu: ";
	cin >> a.n;
	for (int i = 0; i < a.n; i++)
	{
		cout << "a[" << i << "]= ";
		cin >> a.Mang[i];
	}
}
void xuatDaySo(DaySo a)
{
	cout << "Mang sau khi nhap: ";
	for (int i = 0; i < a.n; i++)
	{
		cout << a.Mang[i] << " ";
	}
}
//1.Tinh tong cac phan tu la boi cua 3
int tongBoi3(DaySo a)
{
	int Tong = 0;
	for (int i = 0; i < a.n; i++)
	{
		if (a.Mang[i] % 3 == 0)
			Tong += a.Mang[i];
	}
	return Tong;
}
//2.Tim phan tu nho nhat co trong day so
int timMin(DaySo a)
{
	int min = a.Mang[0];
	for (int i = 0; i < a.n; i++)
	{
		if (a.Mang[i] < min)
			min = a.Mang[i];
	}
	return min;
}
//3.Xuat vi tri phan tu nho nhat co trong day so
int viTriMin(DaySo a)
{
	int min = a.Mang[0];
	int viTri = 0;
	for (int i = 0; i < a.n; i++)
	{
		if (a.Mang[i] < min)
		{
			min = a.Mang[i];
			viTri = i;
		}
	}
	return viTri;
}
//4.Xuat vi tri cuoi cung cua phan tu nho nhat trong day so
int viTriMinCuoiCung(DaySo a)
{
	int min = a.Mang[0];
	int vitri = 0;
	for (int i = a.n-1; i >=0; i++)\
	{
		if (a.Mang[i] < min)
		{
			min = a.Mang[i];
			vitri = i;
		}
	}
	return vitri;
}
//5.Tim so chan, am lon nhat. Viet theo nguyen mau ham sau:
//bool max_Am_Chan(DAYSO a, int &max), neu day so toan duong
//tra ve false, nguoc lai tra ve true va xuat chan am lon nhat
bool max_Am_Chan(DaySo a, int& max)
{
	max = -99;
	bool ktra = false;
	for (int i = 0; i < a.n; i++)
	{
		if (a.Mang[i] < 0)
		{
			if (a.Mang[i] % 2 == 0)
			{
				ktra = true;
				if (a.Mang[i] > max)
				{
					max = a.Mang[i];
				}
			}
		}
	}
	return ktra;
}
//6.Viet ham kiem tra xem day so co tang dan hay khong, neu co
//tra ve true, nguoc lai tra ve false
bool kiemTraTangDan(DaySo a) {
	if (a.n <= 1) {
		return true; 
	}
	for (int i = 0; i < a.n - 1; i++) {
		
		if (a.Mang[i] >= a.Mang[i + 1]) {
			return false;
		}
	}
	return true;
}

//7.Viet ham kiem tra day so toan la so am hay ko. Neu co tra ve true ngc lai ve false
bool tonTaiAm(DaySo a)
{
	/*for (int i = 0; i < a.n; i++)
	{
		if (a.Mang[i] >= 0)
			return false;
	}
	return true;*/
	bool flag = true;
	for (int i = 0; i < a.n; i++)
	{
		if (a.Mang[i] > 0)
			flag = false;
	}
	return flag;
}
//8.Viet ham kiem tra trong day so co ton tai la so nguyen to ko
bool ktSNT(int x)
{
	if (x < 2)
		return false;
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
			return false;
	}
	return true;
}
bool ktTonTaiAm(DaySo a)
{
	bool flag = false;
	for (int i = 0; i < a.n; i++)
	{
		if (ktSNT(a.Mang[i]))
			flag = true;
	}
	return flag;
}
//9.Viet ham tra ve so nguyen to lon nhat trong day so

//10.Viet ham dem phan tu am o vi tri le co trong day so
int demAmVtLe(DaySo a)
{
	int dem = 0;
	for (int i = 0; i < a.n; i++)
	{
		if (i % 2 == 1 && a.Mang[i] < 0)
		{
			dem++;
		}
	}
	return dem;
}
//11.Xuat vi tri cua phan tu k co trong day so
void xuatVtPhanTuK(DaySo a, int k)
{
	for (int i = 0; i < a.n; i++)
	{
		if (a.Mang[i] == k)
		{
			cout << "Vi tri cua phan tu k la: " << i;
			return;
		}
	}
}




//12.Tach thanh 2 day so, chan va le
//13.Ghep 2 day so thanh 1
//14.Tach 2 day so tai vi tri index
//15. int demCucTieu(Array a)
int demCucTieu(DaySo a)
{
	int dem = 0;
	cout << "Cac so cuc tieu la : ";
	for (int i = 1; i < a.n - 1; i++)
	{
		if (a.Mang[i - 1] > a.Mang[i] && a.Mang[i + 1] > a.Mang[i])
		{
			dem++;
			cout << a.Mang[i] << " ";
		}
	}
	cout << endl;
	return dem;
}
//bool ktSNT(int x)
//{
//	if (x < 2)
//	{
//		return false;
//	}
//	for (int i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
void xuatNguyenToVtLe(DaySo a)
{
	cout << "So nguyen to o vi tri le la: ";
	for (int i = 0; i < a.n; i++)
	{
		if (ktSNT(a.Mang[i]))
		{
			if (i % 2 == 1)
			{
				cout << a.Mang[i] << endl;
			}
		}
	}
}
int tinhTongChanVtChan(DaySo a)
{
	int tong = 0;
	for (int i = 0; i < a.n; i+=2)
	{
		if (a.Mang[i] % 2 == 0)
			tong += a.Mang[i];
	}
	return tong;
}
bool ktSHT(int x)
{
	int tong = 0;
	for (int i = 1; i <= x / 2; i++)
	{
		if (x % i == 0)
		{
			tong += i;
		}
	}
	return tong == x;
}
int demSoHoanThien(DaySo a)
{
	int dem = 0;
	for (int i = 0; i < a.n; i++)
	{
		if (ktSHT(a.Mang[i]))
		{
			dem++;
		}
	}
	return dem;
}
void xuat10DauTien(DaySo a)
{
	int dem = 0;
	bool flag = false;
	for (int i = 0; i < a.n; i++)
	{
		if (a.Mang[i] > 0)
		{
			dem++;
			flag = true;
			cout << a.Mang[i] << " ";
			if (dem == 10)
				break;
		}
	}
	if (!flag)
	{
		cout << "Khong co" << endl;
	}
	else if (dem <10)
		cout << endl;
}
bool kiemTraDoiXung(DaySo a) {
	for (int i = 0; i < a.n / 2; i++) {
		if (a.Mang[i] != a.Mang[a.n - 1 - i]) {
			return false;
		}
	}
	return true;
}


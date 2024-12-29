#include "Header.h"
void nhapMaTran(MaTran& a)
{
	cout << "Nhap n = ";
	cin >> a.n;
	for (int i = 0; i < a.n; i++)
	{
		for (int j = 0; j < a.n; j++)
		{
			cout << "mt[" << i << "][" << j << "]= ";
			cin >> a.mt[i][j];
		}
	}
}
void xuatMaTran(MaTran a)
{
	cout << endl;
	for (int i = 0; i < a.n; i++)
	{
		for (int j = 0; j < a.n; j++)
		{
			//if(i<=j)
				cout << a.mt[i][j] << " ";
			//else
			//{
				//cout << "  ";
			//}
		}
		cout << endl;
	}
}
//Viet ham tinh tong tung dong tren ma tran
void tinhTongMoiDong(MaTran a)
{
	for (int i = 0; i < a.n; i++)
	{
		int tong = 0;
		for (int j = 0; j < a.n; j++)
		{
			tong += a.mt[i][j];
		}
		cout << "Tong cua dong " << i + 1 << ": " << tong << endl;
	}
}
//Viet ham tinh tong cac phan tu lon nhat moi dong
int tingTongPTLonNhatMoiDong(MaTran a)
{
	int tong = 0;
	for (int i = 0; i < a.n; i++)
	{
		int max = a.mt[i][0];
		for (int j = 1; j < a.n; j++)
		{
			if (a.mt[i][j] > max)
				max = a.mt[i][j];
		}
		tong += max;
	}
	return tong;
}
//Sap xep cac phan tu tren 1 cot/dong bat ky tang giam dan

//Kiem tra ton tai phan tu la snt o tam giac phai tren duong cheo chinh khong
//Kiem tra voi moi phan tu nam tren trai duong cheo phu la am khong
//Tinh tong phan tu le trong tam giac phai duoi duong cheo phu
//Xuat ra vi tri snt lon nhat co trong ma tran chi ra so dong so cot cua phan tu lon nhat
//Kiem tra tren duong cheo chinh co ton tai snt ko
//Tim phan tu nho nhat co tren duong cheo phu
//Sap xep cac phan tu tren duong cheo chinh giam dan
//Tinh tong cac phan tu nho nhat co tren duong chep chinh va phu
int tinhTongDuongCheo(MaTran a)
{
	int tong = 0;
	for (int i = 0; i < a.n; i++)
	{
		tong += a.mt[i][i];
		tong += a.mt[i][a.n - i - 1];
	}
	if (a.n % 2 == 1)//Loai bo phan tu bi trung
	{
		int tam = a.mt[a.n / 2][a.n / 2];
		tong = tong - tam;
	}
	return tong;
}
int timDongChanNhieuNhat(MaTran a)
{
	int max = 0;
	int dong = -1;
	for (int i = 0; i < a.n; i++)
	{
		int dem = 0; //Dem so chan tren dong
		for (int j = 0; j < a.n; j++)
		{
			if (a.mt[i][j] % 2 == 0)//kiem tra chan
			{
				dem++;
			}
		}
		if (dem > max) 
		{
			max = dem;//So luong so chan
			dong = i;
		}
	}
	return dong;
}
int timMaxDuongCheoPhu(MaTran a)
{
	int max = a.mt[0][a.n - 1];//Phan tu dau tien cua cheo phu
	for (int i = 0; i < a.n; i++)
	{
		if (a.mt[i][a.n - 1 - i] > max)
		{
			max = a.mt[i][a.n - 1 - i];
		}
	}
	return max;
}
int tinhTongMaxDong(MaTran a)
{
	int tong = 0;
	for (int i = 0; i < a.n; i++)
	{
		int max = a.mt[i][0];
		for (int j = 1; j < a.n; j++)
		{
			if (a.mt[i][j] > max)
			{
				max = a.mt[i][j];
			}
		}
		tong += max;
	}
	return tong;
}
int timCotLeNhieuNhat(MaTran a)
{
	int max = 0;
	int cot = -1;
	for (int j = 0; j < a.n; j++)
	{
		int dem = 0; //Dem so le cua cot
		for (int i = 0; i < a.n; i++)
		{
			if (a.mt[i][j] % 2 == 1)//kiem tra le
			{
				dem++;
			}
		}
		if (dem >= max)
		{
			max = dem;//So luong so le
			cot = j;
		}
	}
	return cot;
}
void hoanDoiTamGiac(MaTran& a) 
{
	for (int i = 0; i < a.n; i++) 
	{
		for (int j = 0; j < a.n; j++) 
		{
			if (i < j) 
			{
				swap(a.mt[i][j], a.mt[j][i]);
			}
		}
	}
}
void hoanDoiTamGiacChieuPhu(MaTran& a) {
	for (int i = 0; i < a.n; i++) {
		for (int j = 0; j < a.n; j++) {
			if (i + j < a.n - 1) {
				if (i + j > a.n - 1) {
					swap(a.mt[i][j], a.mt[j][i]);
				}
			}
		}
	}
}

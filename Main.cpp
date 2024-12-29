#include "Header.h"

int main()
{
	DaySo a;
	int max;
	nhapDaySo(a);
	xuatDaySo(a);
	cout << "\nTong cac phan tu co boi la 3: " << tongBoi3(a);
	cout << "\nPhan tu nho nhat la: " << timMin(a);
	cout << "\nVi tri cua phan tu nho nhat la: "<< "a[" << viTriMin(a) << "] ";
	if (max_Am_Chan(a, max)) {
		cout << "\nSo chan am lon nhat trong mang: " << max << endl;
	}
	else {
		cout << "\nKhong co so chan am lon nhat." << endl;
	}
	
	if (kiemTraTangDan(a)) {
		cout << "Day so tang dan." << endl;
	}
	else {
		cout << "Day so khong tang dan." << endl;
	}
	if (tonTaiAm(a)) {
		cout << "Ton tai toan am." << endl;
	}
	else {
		cout << "Khong ton tai toan am." << endl;
	}
	cout << "So luong cuc tieu: " << demCucTieu(a) << endl;
	xuatNguyenToVtLe(a);
	cout << "Tong cac phan tu chan o vi tri chan la: " << tinhTongChanVtChan(a) << endl;
	cout << "Co " << demSoHoanThien(a) << " so hoan thien trong day so." << endl;

	return 0;
}
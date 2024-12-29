#include "Header.h"

int main()
{
	MaTran a;
	nhapMaTran(a);
	xuatMaTran(a);
	tinhTongMoiDong(a);
	cout <<"Tong phan tu lon nhat moi dong la: " << tingTongPTLonNhatMoiDong(a) << endl;
	cout << "Tong duong cheo ma tran la: " << tinhTongDuongCheo(a) << endl;
	cout << "Dong co nhieu so chan nhat là: " << timDongChanNhieuNhat(a) << endl;
	cout << "Phan tu lon nhat cua duong cheo phu la: " << timMaxDuongCheoPhu(a) << endl;
	cout << "Tong cac phan tu lon nhat moi dong la: " << tinhTongMaxDong(a) << endl;
	cout << "Cot co nhieu so le nhat là: " << timCotLeNhieuNhat(a) << endl;

	hoanDoiTamGiac(a);
	cout << "Ma tran sau khi hoan doi tam giac cheo chinh:" << endl;
	xuatMaTran(a);

	hoanDoiTamGiacChieuPhu(a);
	cout << "Ma tran sau khi hoan doi tam giac cheo phu:" << endl;
	xuatMaTran(a);

	return 0;
}

#include<iostream>
using namespace std;

const int MAX = 50;
struct MaTran
{
	int mt[MAX][MAX];
	int n;
};

void nhapMaTran(MaTran& a);
void xuatMaTran(MaTran a);
void tinhTongMoiDong(MaTran a);
int tingTongPTLonNhatMoiDong(MaTran a);
int tinhTongDuongCheo(MaTran a);
int timDongChanNhieuNhat(MaTran a);
int timMaxDuongCheoPhu(MaTran a);
int tinhTongMaxDong(MaTran a);
int timCotLeNhieuNhat(MaTran a);
void hoanDoiTamGiac(MaTran& a);
void hoanDoiTamGiacChieuPhu(MaTran& a);



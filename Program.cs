using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai_Thang_Nam
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int ngay, thang, nam;

            // Nhập ngày, tháng, năm
            Console.WriteLine("Nhap ngay(1-31):");
            while (!int.TryParse(Console.ReadLine(), out ngay) || ngay < 1 || ngay > 31)
            {
                Console.WriteLine("Ngay khong hop le. Vui long nhap lai (1-31):");
            }

            Console.WriteLine("Nhap thang (1-12):");
            while (!int.TryParse(Console.ReadLine(), out thang) || thang < 1 || thang > 12)
            {
                Console.WriteLine("Thang khong hop le. Vui long nhap lại (1-12):");
            }

            Console.WriteLine("Nhap nam:");
            while (!int.TryParse(Console.ReadLine(), out nam) || nam <= 0)
            {
                Console.WriteLine("Nam khong hop le. Vui long nhap lai (nam duong):");
            }

            // Kiểm tra tính hợp lệ của ngày đối với tháng và năm nhập vào
            CNgay ngayNhap = new CNgay(ngay, thang, nam);

            // Kiểm tra số ngày tối đa của tháng
            int maxNgayTrongThang = ngayNhap.SoNgayTrongThang(thang, nam);
            // Kiểm tra nếu ngày nhập vào không hợp lệ, yêu cầu nhập lại
            while (ngay < 1 || ngay > maxNgayTrongThang)
            {
                Console.WriteLine($"Ngay khong hop le!");
                Console.WriteLine("Vui long nhap lai (1 - " + maxNgayTrongThang + "):");
                while (!int.TryParse(Console.ReadLine(), out ngay) || ngay < 1 || ngay > maxNgayTrongThang)
                {
                    Console.WriteLine($"Ngay khong hop le (1 - {maxNgayTrongThang}):");
                }
            }

            // Tạo đối tượng CNgay sau khi ngày hợp lệ
            ngayNhap.Ngay = ngay;
            ngayNhap.Xuat(); // Hiển thị ngày vừa nhập

            // Cộng ngày
            Console.WriteLine("Nhap so ngay de cong:");
            int soNgayCong;
            while (!int.TryParse(Console.ReadLine(), out soNgayCong))
            {
                Console.WriteLine("So ngay khong hop le. Vui long nhap lai:");
            }
            CNgay ngayMoi = ngayNhap.congNgay(soNgayCong);
            Console.WriteLine("Ngay moi sau khi cong: ");
            ngayMoi.Xuat();
            Console.WriteLine();

            // Cộng tháng
            Console.WriteLine("Nhap so thang de cong:");
            int soThangCong;
            while (!int.TryParse(Console.ReadLine(), out soThangCong))
            {
                Console.WriteLine("So thang khong hop le. Vui long nhap lai:");
            }
            CNgay ngayMoiThang = ngayNhap.congThang(soThangCong);
            Console.WriteLine("Ngay moi sau khi cong thang: ");
            ngayMoiThang.Xuat();
            Console.WriteLine();

            // Cộng năm
            Console.WriteLine("Nhap so nam de cong:");
            int soNamCong;
            while (!int.TryParse(Console.ReadLine(), out soNamCong))
            {
                Console.WriteLine("So nam khong hop le. Vui long nhap lai:");
            }
            CNgay ngayMoiNam = ngayNhap.congNam(soNamCong);
            Console.WriteLine("Ngay moi sau khi cong nam: ");
            ngayMoiNam.Xuat();
            Console.WriteLine();

            // Giữ màn hình mở sau khi chạy xong
            Console.WriteLine("Nhan Enter de thoat...");
            Console.ReadLine();  // Đợi người dùng nhấn Enter
        }

    }
}
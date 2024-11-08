using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai_Kieu_Tho_gui
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Nhap gio: ");
            int gio = int.Parse(Console.ReadLine());
            Console.Write("Nhap phut: ");
            int phut = int.Parse(Console.ReadLine());
            Console.Write("Nhap giay: ");
            int giay = int.Parse(Console.ReadLine());

            // Tạo đối tượng CGio với giờ, phút, giây người dùng nhập
            CGio thoiGian = new CGio(gio, phut, giay);


            Console.Write("Nhap so gio muon cong: ");
            int gioCong = int.Parse(Console.ReadLine());
            thoiGian.congGio(gioCong);

            Console.Write("Nhap so phut muon cong: ");
            int phutCong = int.Parse(Console.ReadLine());
            thoiGian.congPhut(phutCong);

            Console.Write("Nhap so giay muon cong: ");
            int giayCong = int.Parse(Console.ReadLine());
            thoiGian.congGiay(giayCong);


            Console.WriteLine($"Thoi gian sau khi cong la: {thoiGian.Gio} gio, {thoiGian.Phut} phut, {thoiGian.Giay} giay");


            Console.ReadLine();
        }
    }
}

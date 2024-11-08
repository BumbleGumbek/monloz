using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai_Thang_Nam
{
    internal class CNgay
    {
        private int m_ngay;
        private int m_thang;
        private int m_nam;

        public int SoNgayTrongThang(int thang, int nam)
        {
            if (thang == 2)
            {
                return IsLeapYear(nam) ? 29 : 28; // Tháng 2 có 29 ngày nếu là năm nhuận, 28 nếu không phải
            }

            switch (thang)
            {
                case 4: case 6: case 9: case 11: return 30; // Các tháng có 30 ngày
                default: return 31; // Các tháng còn lại có 31 ngày
            }
        }


        private bool IsLeapYear(int year)
        {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            {
                return true; // Năm nhuận
            }
            return false;
        }



        public int Ngay
        {
            get { return m_ngay; }
            set
            {
                // Kiểm tra ngày hợp lệ với tháng và năm
                if (value < 1 || value > SoNgayTrongThang(m_thang, m_nam))
                {
                    Console.WriteLine($"Ngày {value} không hợp lệ cho tháng {m_thang} trong năm {m_nam}!");
                }
                else
                {
                    m_ngay = value;
                }
            }
        }



        public int Thang
        {
            get { return m_thang; }
            set
            {
                if (value < 1 || value > 12)
                {
                    Console.WriteLine("Tháng không hợp lệ!");
                }
                else
                {
                    m_thang = value;
                }
            }
        }

        public int Nam
        {
            get { return m_nam; }
            set
            {
                if (value <= 0)
                {
                    Console.WriteLine("Năm không hợp lệ!");
                }
                else
                {
                    m_nam = value;
                }
            }
        }


        public CNgay()
        {
            m_ngay = 1;
            m_thang = 1;
            m_nam = 1;
        }

        public CNgay(int ngay, int thang, int nam)
        {
            m_ngay = ngay;
            m_thang = thang;
            m_nam = nam;
        }


        public void Xuat()
        {
            Console.WriteLine(m_ngay + "/" + m_thang + "/" + m_nam);
        }



        public CNgay congNgay(int t)
        {
            DateTime date = new DateTime(m_nam, m_thang, m_ngay);
            date = date.AddDays(t);
            return new CNgay(date.Day, date.Month, date.Year);
        }



        public CNgay congThang(int m)
        {
            DateTime date = new DateTime(m_nam, m_thang, m_ngay);
            date = date.AddMonths(m); return new CNgay(date.Day, date.Month, date.Year);
        }



        public CNgay congNam(int n)
        {
            DateTime date = new DateTime(m_nam, m_thang, m_ngay);
            date = date.AddYears(n);
            return new CNgay(date.Day, date.Month, date.Year);
        }



        public static bool operator ==(CNgay a, CNgay b)
        {
            return new DateTime(a.m_nam, a.m_thang, a.m_ngay) == new DateTime(b.m_nam, b.m_thang, b.m_ngay);
        }



        public static bool operator !=(CNgay a, CNgay b)
        {
            return !(a == b);
        }


        public static bool operator >(CNgay a, CNgay b)
        {
            return new DateTime(a.m_nam, a.m_thang, a.m_ngay) > new DateTime(b.m_nam, b.m_thang, b.m_ngay);
        }



        public static bool operator <(CNgay a, CNgay b)
        {
            return new DateTime(a.m_nam, a.m_thang, a.m_ngay) < new DateTime(b.m_nam, b.m_thang, b.m_ngay);
        }

    }
}




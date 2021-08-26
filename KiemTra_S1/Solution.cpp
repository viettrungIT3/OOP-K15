#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

//class
class Phieu;
class SanPham
{
private:
    char maSP[10];
    char tenSP[30];
    int soLuong;
    double donGia;

public:
    void Nhap();
    void Xuat();
    double ThanhTien()
    {
        return soLuong * donGia;
    }
    //	friend class Phieu;
};

class NCC
{
private:
    char maNCC[10];
    char tenNCC[30];
    char diaChi[30];
    char sdt[15];

public:
    void Nhap();
    void Xuat();
};

void NCC::Nhap()
{
    cout << "Nhap ma NCC : ";   fflush(stdin);  gets(maNCC);
    cout << "Nhap ten NCC: ";   fflush(stdin);  gets(tenNCC);
    cout << "Nhap dia chi: ";   fflush(stdin);  gets(diaChi);
    cout << "Nhap SDT    : ";   fflush(stdin);  gets(sdt);
}
void NCC::Xuat()
{
    cout << left << setw(20) << "Ma nha cung cap: " << setw(20) << maNCC << "Ten nha cung cap: " << tenNCC << endl;
    cout << left << setw(10) << "Dia chi: " << setw(30) << diaChi << "SDT: " << sdt << endl;
}

class Phieu
{
private:
    char maPhieu[10];
    char ngayLap[15];
    NCC ncc;
    int n;
    SanPham *sanPhams;

public:
    void Nhap();
    void Xuat();
    friend void SapXep(Phieu a);
    friend void Chen(Phieu &a, SanPham x, int pos);
};

//dinh nghia
void SanPham::Nhap()
{
    cout << "Nhap ma SP   : ";  fflush(stdin); gets(maSP);
    cout << "Nhap ten SP  : ";  fflush(stdin); gets(tenSP);
    cout << "Nhap so luong: ";  cin >> soLuong;
    cout << "Nhap don gia : ";  cin >> donGia;
}
void SanPham::Xuat()
{
    cout << left << setw(15) << maSP << setw(20) << tenSP << setw(15) << soLuong << setw(15) << donGia
         << setw(15) << ThanhTien() << endl;
}

void Phieu::Nhap()
{
    cout << "\tNhap phieu:" << endl;
    cout << "Nhap ma phieu: ";  fflush(stdin);  gets(maPhieu);
    cout << "Nhap ngay lap: ";  fflush(stdin);  gets(ngayLap);
    cout << "\tNhap thong tin nha cung cap:" << endl;
    ncc.Nhap();
    cout << "\tNhap so luong san pham: ";       cin >> n;
    sanPhams = new SanPham[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\tNhap thong tin san pham thu " << i + 1 << endl;
        sanPhams[i].Nhap();
    }
}
void Phieu::Xuat()
{
    cout << "\nDai hoc Victory" << endl;
    cout << "\t\t\tPHIEU NHAP VAN PHONG PHAM" << endl;

    cout << left << setw(20) << "Ma phieu: " << setw(20) << maPhieu << "Ngay lap: " << ngayLap << endl;
    
    ncc.Xuat();

    //tieu de san pham
    cout << left << setw(15) << "Ma SP" << setw(20) << "Ten SP"
         << setw(15) << "So Luong" << setw(15) << "Don Gia"
         << setw(15) << "Thanh Tien" << endl;
    //Tong tien

    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sanPhams[i].Xuat();
        sum += sanPhams[i].ThanhTien();
    }

    cout << setw(65) << "TONG" << setw(15) << sum << endl;
    
    cout << right << "\tHieu truong" << setw(25) << "Phong tai chinh" << setw(25) << "Nguoi Lap" << endl;
}

void SapXep(Phieu a)
{ 
    for (int i = 0; i < a.n - 1; i++)
        for (int j = a.n - 1; j > i; j--)
            if (a.sanPhams[j - 1].ThanhTien() < a.sanPhams[j].ThanhTien())
            {
                SanPham temp = a.sanPhams[j - 1];
                a.sanPhams[j - 1] = a.sanPhams[j];
                a.sanPhams[j] = temp;
            }
}

void Chen(Phieu &a, SanPham x, int pos)
{
    a.sanPhams = (SanPham *)realloc(a.sanPhams, (a.n + 1) * sizeof(SanPham));
    for (int i = a.n; i >= pos; i--)
        a.sanPhams[i] = a.sanPhams[i - 1];
    a.sanPhams[pos - 1] = x;
    a.n++;
}

// Cho xinh động hơn
void VachKe()
{
    cout << setfill('-');		// set fill bằng ký tự '-' thay vì ' '
	cout << setw(80) << "-" << endl;	// fill 55 ký tự '-'
	cout << setfill(' ');   // reset fill bằng ký tự ' '
}

int main()
{
    Phieu a;
    a.Nhap();

    VachKe();
    cout << "\nPhieu vua nhap la: " << endl;
    a.Xuat();
    VachKe();
    cout << endl << endl;
    
    // Cau 2
    	SapXep(a);
    	cout << "\nPhieu sau khi sap xep la: " << endl;
    	a.Xuat();
        VachKe();
        cout << endl << endl;

    // Cau 3:
    	cout << "Nhap san pham can Chen: " << endl;
    	SanPham x;
    	x.Nhap();
    	Chen(a, x, 1);
    	cout << "\nPhieu sau khi chen them san pham la:" << endl;
    	a.Xuat();
        VachKe();
        cout << endl << endl;


    return 0;
}
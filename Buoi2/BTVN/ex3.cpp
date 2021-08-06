#include <bits/stdc++.h>
using namespace std;

class Hang
{
private:
    char maHang[10];
    char tenHang[30];
    char ngayNhap[12];
    char ngaySX[12];
    float donGia;
    int SL;

public:
    Hang(/* args */);
    Hang(char maHang[10], char tenHang[30], char ngayNhap[12], char ngaySX[12], float donGia, int SL);
    ~Hang();
    void NHAP();
    void XUAT();
};

Hang::Hang()
{
    strcpy(maHang, "");
    strcpy(tenHang, "");
    strcpy(ngayNhap, ""); //strcpy(ngayNhap,"1/2/2021");
    strcpy(ngaySX, "");   //strcpy(ngaySX,"1/1/2021");
    donGia = 0.0;
    SL = 0;
}

Hang::Hang(char maHang[10], char tenHang[30], char ngayNhap[12], char ngaySX[12], float donGia, int SL)
{
    strcpy(this->maHang, maHang);
    strcpy(this->tenHang, tenHang);
    strcpy(this->ngayNhap, ngayNhap);
    strcpy(this->ngaySX, ngaySX);
    this->donGia = donGia;
    this->SL = SL;
}

Hang::~Hang()
{
    strcpy(maHang, "");
    strcpy(tenHang, "");
    strcpy(ngayNhap, "");
    strcpy(ngaySX, "");
    donGia = 0.0;
    SL = 0;
}

void Hang::NHAP()
{
    cout << "===NHAP===" << endl;
    cout << "Nhap ma hang  : ";     fflush(stdin);      cin >> maHang;
    cout << "Nhap ten hang : ";     fflush(stdin);      cin >> tenHang;
    cout << "Nhap ngay nhap: ";     fflush(stdin);      cin >> ngayNhap;
    cout << "Nhap ngay SX  : ";     fflush(stdin);      cin >> ngaySX;
    cout << "Nhap don gia  : ";     cin>>donGia;
    cout << "Nhap so luong : ";     cin>>SL;
}

void Hang::XUAT()
{
    // cout << "===Xuat===" << endl;
    cout << "Ma hang  : "<<maHang<<endl;
    cout << "Ten hang : "<<tenHang<<endl;
    cout << "Ngay nhap: "<<ngayNhap<<endl;
    cout << "Ngay SX  : "<<ngaySX<<endl;
    cout << "Don gia  : "<<donGia<<endl;
    cout << "So luong : "<<SL<<endl;

    // cout<<left<<setw(10)<<maHang<<setw(20)<<tenHang<<setw(12)<<ngayNhap<<setw(12)<<ngaySX<<donGia<<SL<<endl;
}

int main(int argc, char const *argv[])
{
    Hang P;
    P.NHAP();
    cout<<"Thong tin mat hang P: "<<endl;
    P.XUAT();

    Hang Q("M123", "Banh gao", "1/7/2021", "1/1/2021", 20000.0, 100);
    cout<<"Thong tin mat hang Q: "<<endl;
    Q.XUAT();
    return 0;
}

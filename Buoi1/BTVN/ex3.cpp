#include <bits/stdc++.h>
using namespace std;

class CanBo
{
private:
    /* data */
public:
    char maCB[10];
    char hoTen[30];
    char ngaySinh[12];
    int soNgay;

    void Nhap();
    double TinhLuong();
    void Xuat();
};

void CanBo::Nhap()
{
    cout<<"Nhap ma CB    : ";   fflush(stdin);  gets(maCB);
    cout<<"Nhap ho ten   : ";   fflush(stdin);  gets(hoTen);
    cout<<"Nhap ngay sinh: ";   fflush(stdin);  gets(ngaySinh);
    cout<<"So ngay lam viec trong thang: ";     cin>>soNgay;
}

double CanBo::TinhLuong()
{
    return soNgay * 250000;
}

void CanBo::Xuat()
{
    cout<<"-----------------Thong tin-----------------"<<endl;
    cout<<"Ma CB                          : "<<maCB<<endl;
    cout<<"Ho va ten                      : "<<hoTen<<endl;
    cout<<"Ngay sinh                      : "<<ngaySinh<<endl;
    cout<<"So ngay lam viec trong thang   : "<<soNgay<<endl;
}

int main(int argc, char const *argv[])
{
    CanBo X;
    X.Nhap();
    X.Xuat();
    cout<<"Tien luong lam viec trong thang: "<<X.TinhLuong()<<endl;
    return 0;
}

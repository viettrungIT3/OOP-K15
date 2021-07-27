#include <bits/stdc++.h>
using namespace std;

class SinhVien
{
public:
    char maSV[10];
    char hoTen[30];
    int ngaySinh;
    int thangSinh;
    int namSinh;
    char gioiTinh[5];
    float diemTB;
    char xepLoaiDaoDuc[8];

    void Nhap();
    void Xuat();
};

void SinhVien::Nhap()
{
    cout<<"Nhap ma sinh vien: ";    fflush(stdin);  gets( maSV);
    cout<<"Nhap ho va ten   : ";    fflush(stdin);  gets( hoTen);
    cout<<"Nhap ngay sinh   : ";    cin>>ngaySinh;
    cout<<"Nhap thang sinh  : ";    cin>>thangSinh;
    cout<<"Nhap nam sinh    : ";    cin>>namSinh;
    cout<<"Nhap gioi tinh   : ";    fflush(stdin);  gets( gioiTinh);
    cout<<"Nhap diem TB     : ";    cin>>diemTB;
    cout<<"Nhap xep loai DD : ";    fflush(stdin);  gets( xepLoaiDaoDuc);
}

//C1
// void SinhVien::Xuat()
// {
//     cout<<"Ma sinh vien: "<<maSV<<endl;
//     cout<<"Ho va ten   : "<<hoTen<<endl;
//     cout<<"Ngay sinh   : "<<ngaySinh<<"/"<<thangSinh<<"/"<<namSinh<<endl;
//     cout<<"Gioi tinh   : "<<maSV<<endl;
//     cout<<"Diem TB     : "<<maSV<<endl;
//     cout<<"Xep loai dao duc: "<<maSV<<endl;
// }

//C2: cách này thường sử dụng cho dạng xuất danh sách
void SinhVien::Xuat()
{
    cout<<left<<setw(10)<<maSV<<setw(30)<<hoTen<<setw(12)<<ngaySinh<<setw(10)<<gioiTinh<<setw(6)<<diemTB<<setw(16)<<xepLoaiDaoDuc<<endl;
}

int main(int argc, char const *argv[])
{
    SinhVien SVDiemCao, SVDiemThap;
    
    cout<<"Nhap thong tin sinh vien diem cao: "<<endl;
    SVDiemCao.Nhap();
    cout<<"Nhap thong tin sinh vien diem thap: "<<endl;
    SVDiemThap.Nhap();

    //Hoán đổi
    if (SVDiemCao.diemTB < SVDiemThap.diemTB)
    {
        float temp = SVDiemCao.diemTB;
        SVDiemCao.diemTB = SVDiemThap.diemTB;
        SVDiemThap.diemTB = temp;
    }
    


    //C1
    // cout<<"Thong tin sinh vien diem cao: "<<endl;
    // SVDiemCao.Xuat();
    // cout<<"Thong tin sinh vien diem thap: "<<endl;
    // SVDiemThap.Xuat();

    //C2
    cout<<"\n--------------------------------- THONG TIN SINH VIEN ---------------------------------"<<endl;
    cout<<left<<setw(10)<<"Ma SV"<<setw(30)<<"Ho Ten"<<setw(12)<<"Ngay Sinh"<<setw(10)<<"Gioi Tinh"<<setw(6)<<"Diem TB"<<setw(16)<<"Xep loai dao duc"<<endl;
    SVDiemCao.Xuat();
    SVDiemThap.Xuat();
    return 0;
}

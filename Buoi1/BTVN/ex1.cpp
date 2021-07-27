#include <bits/stdc++.h>
using namespace std;

class HinhTron
{
public:
    double BK;

    double ChuVi();
    double DienTich();
};

double HinhTron::ChuVi()
{
    return BK * 2 * 3.14;
}

double HinhTron::DienTich()
{
    return BK * BK * 3.14;
}

int main(int argc, char const *argv[])
{
    HinhTron a;
    cout<<"Nhap ban kinh hinh tron: ";  cin>>a.BK;
    cout<<"Chu vi: "<<a.ChuVi()<<endl;
    cout<<"Dien tich: "<<a.DienTich();
    return 0;
}

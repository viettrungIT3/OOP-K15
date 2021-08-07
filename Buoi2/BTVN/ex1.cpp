#include <bits/stdc++.h>
using namespace std;

class PTB2
{
    float a, b, c;

public:
    PTB2();
    PTB2(float x, float y, float z);
    ~PTB2();
    void NHAP();
    void XUAT();
    void GIAI();
};

PTB2::PTB2()
{
    a = b = c = 0;
}

PTB2::PTB2(float x, float y, float z)
{
    a = x;
    b = y;
    c = z;
}

PTB2::~PTB2()
{
    a = b = c = 0;
}

void PTB2::NHAP()
{
    cout << "Nhap lan luot cac he so: " << endl;
    cout << "Nhap a = ";
    cin >> a;
    cout << "Nhap b = ";
    cin >> b;
    cout << "Nhap c = ";
    cin >> c;
}

void PTB2::XUAT()
{
    cout << "Phuong trinh: " << a << "X" << (char)253 << (b >= 0 ? "+" : "-") << abs(b) << "x" << (c >= 0 ? "+" : "-") << abs(c) << " = 0 " << endl;
}

void PTB2::GIAI()
{
    if (a == 0)
        cout << "Day khong phai ptb2" << endl;
    else
    {
        float delta = b * b - 4 * a * c;
        if (delta < 0)
            cout << "Phuong trinh vo nghiem." << endl;
        else if (delta == 0)
            cout << "Phuong trinh co 1 nghiem kep: x = " << -b / (2 * a) << endl;
        else
        {
            cout << "Phuong trinh co 2 nghiem phan biet: " << endl;
            cout << "\tx1=" << (-b + sqrt(delta)) / (2 * a) << endl;
            cout << "\tx2=" << (-b - sqrt(delta)) / (2 * a) << endl;
        }
    }
}

int main()
{
    PTB2 P(1, -2, 1);
    P.XUAT();
    P.GIAI();
    PTB2 Q;
    Q.NHAP();
    Q.XUAT();
    Q.GIAI();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

class PS
{
private:
    int a, b;

public:
    PS(/* args */);
    PS(int a, int b);
    ~PS();
    void NHAP();
    void XUAT();
    void RUT();
};

PS::PS(/* args */)
{
    a = 0;
    b = 1;
}

PS::PS(int a, int b)
{
    this->a = a;
    this->b = b;
}

PS::~PS()
{
    a = 0;
    b = 0;
}

void PS::NHAP()
{
    cout << "Nhap lan luot TS va MS: ";
    cin >> a >> b;
}

void PS::XUAT()
{
    if ((a < 0 && b < 0) || (a > 0 && b < 0))
    {
        a = -a;
        b = -b;
    }

    cout << a << "/" << b << endl;
}

void PS::RUT()
{
    int uclb = __gcd(a, b);
    a /= uclb;
    b /= uclb;
}

int main(int argc, char const *argv[])
{
    PS P(4, 6);
    cout << "PS vua nhap: ";
    P.XUAT();
    cout << "PS sau khi rut gon: ";
    P.RUT();
    P.XUAT();

    PS Q;
    Q.NHAP();
    cout << "PS vua nhap: ";
    Q.XUAT();
    cout << "PS sau khi rut gon: ";
    Q.RUT();
    Q.XUAT();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

class Hang;

class NSX
{
private:
    int maNSX;
    char tenNSX[30];
    char diaChiNSX[50];

public:
    void Input();
    void Output();
    friend class Hang;
};

void NSX::Input()
{
    cout << "  Enter Manufacturer's code   : ";      cin >> maNSX;
    cout << "  Enter Manufacturer's name   : ";      fflush(stdin);  gets(tenNSX);
    cout << "  Enter Manufacturer's address: ";      fflush(stdin);  gets(diaChiNSX);
}

void NSX::Output()
{
    // C1:
    // cout << "\tManufacturer's code   : " << maNSX << endl;
    // cout << "\tManufacturer's name   : " << tenNSX << endl;
    // cout << "\tManufacturer's address: " << diaChiNSX << endl;

    // C2:
    cout << left << setw(10) << maNSX << setw(30) << tenNSX << setw(50) << diaChiNSX << endl;
}

class Hang
{
private:
    int maHang;
    char tenHang[30];
    NSX x;

public:
    void Input();
    void Output();
};

void Hang::Input()
{
    cout << "  Enter Item code             : ";      cin >> maHang;
    cout << "  Enter Item name             : ";      fflush(stdin);  gets(tenHang);
    x.Input();
}

void Hang::Output()
{
    // C1:
    // cout << "\tItem's code   : " << maHang << endl;
    // cout << "\tItem's name   : " << tenHang << endl;
    // x.Output();

    // C2:
    cout << left << setw(10) << maHang << setw(30) << tenHang;
    x.Output();
}

int main(int argc, char const *argv[])
{
    int num;
    Hang *items;

    cout << "Enter the number of items: ";
    cin >> num;
    items = new Hang[num];

    // INPUT
    for (int i = 0; i < num; i++)
    {
        cout << "------Enter item information-------" << endl;
        items[i].Input();
    }

    // OUTPUT
    cout << "\n\nList of " << num << " items" << endl;
    cout << left << setw(10) << "Ma Hang" << setw(30) << "Ten Hang" << setw(10) << "Ma NSX" << setw(30) << "Ten NSX" << setw(50) << "Dia Chi NSX" << endl;
    for (int i = 0; i < num; i++)
        items[i].Output();

    return 0;
}

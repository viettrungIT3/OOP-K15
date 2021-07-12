#include <bits/stdc++.h>
using namespace std;

class connguoi
{
public:
    string hoten;
    int tuoi;

public:
    void Nhap();
};

void connguoi::Nhap()
{
    cout << "Nhap Ho Ten: ";
    fflush(stdin); // Xóa bộ đệm
    getline(cin, hoten);

    cout << "Nhap Tuoi: ";
    cin >> tuoi;
}

int main()
{
    connguoi obj; // Khai báo obj là 1 đối tượng trong lớp connguoi

    obj.Nhap();

    cout << "Ho Ten: " << obj.hoten << endl;
    cout << "Tuoi: " << obj.tuoi << endl;

    return 0;
}
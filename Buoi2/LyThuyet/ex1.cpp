#include <bits/stdc++.h>
using namespace std;

class SinhVien{                             // Lớp SinhVien
	private:                                // Phạm vi truy cập
        string masinhvien, ten, quequan;    // Thuộc tính (kiểu string)
        int tuoi;                           // Thuộc tính (kiểu int)
        float diemtoan, diemly, diemhoa;    // Thuộc tính (kiểu float)
    public:                                 // Phạm vi truy cập
        void di();                          // Phương thức (method)
        void dung();                        // Phương thức (method)
        void ngoi();                        // Phương thức (method)
        void hoctap();                      // Phương thức (method)
};

int main()
{
    SinhVien SV1;       //Khai báo đối tượng SV1 thược lớp SinhVien
    return 0;
}
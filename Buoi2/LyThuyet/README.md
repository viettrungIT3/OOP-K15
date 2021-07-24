# Giới thiêu Lớp - Đối tượng 
Về bản chất, lớp (class) là một kiểu dữ liệu do bạn tự định nghĩa và đối tượng chính là biến của kiểu dữ liệu này. 

Cú pháp để khai báo một lớp như sau:

    class <tên_lớp> {
    thuộc tính truy cập:    // public or private or protected

        // Khai báo danh sách các thuộc tính

        <kiểu_dữ_liệu> <tên_thuộc_tính>;

            ...

        // Khai báo danh sách các phương thức
        
        <kiểu_trả_về> <tên_phương_thức>(<kiểu_tham_số> <tên_tham_số>, ...) {

            ...

        }

        ...
    };

VD về lớp may vi tinh: 

    class Mayvitinh {     // Lớp Mayvitinh
    public:               // Phạm vi truy cập
        int chieudai;     // Thuộc tính (kiểu int)
        string mausac ;   // Thuộc tính (kiểu string)
        void moLoL();     // Phương thức (method)
        void caiWin();    // Phương thức (method)
    };

Cú pháp để khai báo một đối tượng như sau:

    int main()
    {
        <tên lớp> <tên đối tượng>
    }

VD : 

    Mayvitinh mayAsus;
    Mayvitinh mayAcer;

Ví dụ: Xem ex1.cpp

Trong ví dụ trên:
Lớp sinhvien sẽ có các:

* Thuộc tính (Attribute) là: mã sinh viên, tên, tuổi, quê quán, điểm toán, điểm lý, điểm hoá, …
* Hành vi (Trong C++ sẽ gọi là phương thức – Method): đi, đứng, ngồi, học tập, …

# Truy cập dữ liệu

Để truy cập vào thành viên dữ liệu của đối tượng ta sử dụng toán tử truy cập thành viên trực tiếp là dấu chấm '.' -> Xem ex2.cpp

Điều quan trọng cần nhớ là:

1. Các thành viên public cũng được truy cập bằng toán tử .
2. Nhưng các thành viên private và protected không thể được truy cập một cách trực tiếp bởi sử dụng toán tử truy cập thành viên trực tiếp này.
# Phạm vi truy cập 
Phạm vi truy cập là cách mà người lập trình quy định về quyền được truy xuất đến các thành phần của lớp.

Trong C++ có 3 loại phạm vi chính là: private, protected, public:

| Phạm Vi Truy Cập  | Ý Nghĩa |
| ------------- |:-------------:|
| public      | Không hạn chế. Thành phần có thuộc tính này có thể được truy cập ở bất kì vị trí nào.     |
| private      | Thành phần có thuộc tính này sẽ chỉ được truy cập từ bên trong lớp. Bên ngoài lớp hay trong lớp dẫn xuất sẽ không thể truy cập được.     |
| protected      | Mở rộng hơn private một chút. Thành phần có thuộc tính này sẽ có thể truy cập ở trong nội bộ lớp và trong lớp dẫn xuất (lớp dẫn xuất sẽ được trình bày trong bài Tính Kế Thừa)     |

Tóm lại: 
![This is a alt text.](/img/pvtc.png "This is a sample image.")

VD: 
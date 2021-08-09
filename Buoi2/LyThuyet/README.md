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

# Hàm khởi tạo (Constructor)

## Hàm khỏi tạo là gì?
Hàm khởi tạo là một hàm thành viên đặc biệt của một lớp. Nó sẽ được tự động gọi đến khi một đối tượng của lớp đó được khởi tạo.

## Sự khác biệt giữa hàm tạo và hàm thành viên thông thường
### Một hàm tạo sẽ khác những hàm thông thường ở những điểm sau:

* Có tên trùng với tên lớp
* Không có kiểu dữ liệu trả về ( kể cả kiểu void)
* Tự động được gọi khi một đối tượng thuộc lớp được tạo ra
* Nếu chúng ta không khai báo một hàm tạo, trình biên dịch C++ sẽ tự động tạo một hàm tạo mặc định cho chúng ta (sẽ là hàm ​​không có tham số nào và có phần thân trống).

Hàm tạo có thể rất hữu ích để thiết lập các giá trị khởi tạo cho các biến thành viên cụ thể.

Ví dụ đơn giản về hàm khởi tạo:

    class sinhvien
    {
    private:
        string ten;
        int tuoi;
    public:
        sinhvien(); // Đây là hàm khởi tạo
        ~sinhvien();
    };

## Các loại hàm khởi tạo
Hàm khởi tạo cơ bản sẽ chia làm 3 loại: 
1. Hàm khởi tạo không tham số (Cũng có thể gọi là hàm tạo mặc định – Default Constructor )
2. Hàm khởi tạo có tham số ( Parameterized Constructor )
3. Hàm khởi tạo sao chép ( Copy Constructor )

![This is a alt text.](/img/CPP-Constructors-768x243.webp "This is a sample image.")

### Hàm khởi tạo không tham số ( Default Constructor )
Hàm tạo loại này sẽ không truyền vào bất kì một đối số nào

    class sinhvien
    {
    private:
        string ten;
        int tuoi;
    public:
        sinhvien()
        {
            this->ten = "";
            this->tuoi = 0;
        }
        ~sinhvien();
    };

Như trong ví dụ trên, hàm tạo sinhvien() không hề có đối số nào được truyền vào.

Theo ý kiến riêng của mình thì thông thường trong hàm loại này mình sẽ gán cho tất cả các thuộc tính về giá trị mặc định.

Trong ví dụ trên:

* Thuộc tính ten thuộc kiểu string mình sẽ đưa về mặc định là một chuối rỗng "".
Thuộc tính tuoi thuộc kiểu int mình sẽ đưa về mặc định là 0.
* Hàm khởi tạo có tham số ( Parameterized Constructor )
Với loại hàm tạo này ta có thể truyền đối số cho chúng. Thông thường, các đối số này giúp khởi tạo một đối tượng khi nó được tạo.

Để khai báo một hàm khởi tạo có tham số chỉ cần thêm các tham số vào nó giống như cách bạn thêm tham số bất kỳ hàm nào khác.Khi bạn xác định phần thân của hàm tạo, hãy sử dụng các tham số để khởi tạo đối tượng.

    class sinhvien
    {
    private:
        string ten;
        int tuoi;
    public:
        sinhvien(string ten_new, int tuoi_new)
        {
            this->ten = ten_new;
            this->tuoi = tuoi_new;
        }
        ~sinhvien();
    };

Sau khi khai báo hàm trong lớp, ta có thể dễ dàng dùng nó bằng cách truyền tham số trong khi khởi tạo đối tượng.

    int main()
    {
        sinhvien obj("Nguyen Viet Trung", 20); // Ta truyền luôn tham số trong khi khới tạo đối tượng  
    }

***Lưu ý:***

* Khi một đối tượng được khai báo trong hàm khởi tạo có tham số, các giá trị ban đầu phải được truyền dưới dạng đối số cho hàm tạo.
* Cách khai báo đối tượng bình thường có thể sẽ gây lỗi.
Điều này có nghĩa là bình thường để khai báo một đối tượng bạn sẽ khai báo bằng cú pháp:
* Các hàm khởi tạo có thể được gọi một cách rõ ràng hoặc ngầm định 


        int main()
        {
            sinhvien obj = sinhvien("Nguyen Viet Trung", 20); // Đây là cách rõ ràng
            sinhvien obj("Nguyen Viet Trung", 20); // Đây là cách ngầm định  
        }

Nhưng thông thường để tiết kiệm code thì chúng ta hay sử dụng các ngầm định hơn.

## Hàm khởi tạo sao chép ( Copy Constructor ) ( Tự tìm hiểu)

# Hàm huỷ (Deconstructor)
## Hàm huỷ là gì?

Hàm huỷ cũng là một hàm thành viên đặc biệt giống như hàm tạo, nó được dùng để phá huỷ hoặc xoá một đối tượng trong lớp.

## Hàm huỷ sẽ được gọi khi nào?

Hàm hủy được gọi tự động khi một đối tượng thoát khỏi phạm vi của nó (Scope):

1. Một chức năng kết thúc.
2. Chương trình kết thúc.
3. Một khối chứa các biến cục bộ kết thúc.
4. Một toán tử delete được gọi

Hàm huỷ khác những hàm thành viên bình thường ở đâu?
* Cũng giống với hàm tạo, hàm huỷ có tên trùng với tên của lớp, nhưng điểm khác biệt ở đây là sẽ có thêm `~` ở đầu.
* Hàm huỷ là một hàm không có đối số truyền vào, và cũng không trả về giá trị ( kể cả `void`)

        class sinhvien
        {
        private:
            string ten;
            int tuoi;
        public:
            sinhvien()
            {
                this->ten = "";
                this->tuoi = 0;
            }
            ~sinhvien() // Đây là hảm huỷ
            {
                this->ten = "";
                this->tuoi = 0;
            }
        }

## Có thể có nhiều hơn một hàm huỷ ở trong cùng một lớp không?

Câu trả lời ở đây là không nhé.

Khác với hảm khởi tạo, hàm huỷ có thể có một và chỉ một mà thôi.

## Khi nào thì ta cần tự định nghĩa một hàm huỷ?

Với C++ thì nếu ta không khai báo một hàm huỷ, trình biên dịch cũng sẽ tự định nghĩa một hàm huỷ. Thông thường thì hàm huỷ này hoạt động khá tốt, nhưng khi bài toán có sử dụng con trỏ, hoặc cấp phát bộ nhớ động thì ban nên khai báo một hàm huỷ riêng để tránh rỏ rỉ bộ nhớ.

Nhưng với bản thân mình thông thường mình vẫn sẽ khai báo một hàm huỷ cho dù có dùng con trỏ hay cấp phát động hay không, và trong hàm huỷ đó mình sẽ đưa các thuộc tính của lớp về giá trị mặc định ( giống với hàm khởi tạo không tham số ).
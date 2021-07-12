# Lập trình hướng đối tượng là gì 
[Tham khảo](https://www.w3schools.com/cpp/cpp_oop.asp) <br>


    **Lập trình hướng đối tượng** (Tiếng Anh: Object Oriented Programming, viết tắt: OOP) là một mẫu 
    hình lập trình dựa trên khái niệm “công nghệ đối tượng”. *theo https://vi.wikipedia.org/*

    **Lập trình hướng đối tượng** được hiểu đơn giản là một phương pháp để giải quyết bài toán lập 
    trình mà khi áp dụng code sẽ trở nên dễ phát triển và dễ bảo trì hơn. Đây là một phương pháp 
    tiên tiến, phù hợp để phát triển hầu hết các ứng dụng hiện nay. Phương pháp này sẽ giải quyết 
    bài toán bằng cách chia chương trình thành các đối tượng, với mỗi đối tượng sẽ có các thuộc tính 
    (dữ liệu) và hành vi riêng (phương thức).

# Khái niệm cơ bản của OOP 
## **Đối tượng (Object)**
Trong lập trình hướng đối tượng, một đối tượng được hiểu giống như 1 thực thể: người, vật, …

Một đối tượng bao gồm 2 thành phần: Thuộc Tính và Phương Thức

* Thuộc Tính (Attribute): Là những đặc điểm, thông tin của đối tượng (Vd: Xét với đối tượng là một người thì sẽ có các <br> thuộc tính là: Tên, Tuổi, Màu Da, Màu Tóc, Chiều Cao, Cân Nặng, …)

* Phương Thức (Method): Là những hành động mà đối tượng đó có thể thưc hiện (VD: Vẫn xét với đối tượng là một người <br> thì sẽ có hành động: đi, nói, ăn, uống, …)

## **Lớp (class)**
Các đối tượng có đặc tính tương như nhau sẽ được gom lại thành một lớp đối tượng.

Một lớp cũng sẽ có 2 thành phần là **Thuộc Tính** và **Phương Thức**.

Ngoài ra, lớp cũng có thể được dùng để định nghĩa một kiểu dữ kiệu mới.

## **Sự khác nhau giữa đối tượng và lớp**
Lớp là một khuôn mẫu còn đối tượng là một thể hiện cụ thể dựa trên khuôn mẫu đó.

Để dễ hiểu hơn mình sẽ lấy một ví dụ thực tế:

* Nói về con mèo thì lớp chính là loài mèo. Loài mèo có:
    * Các thông tin, đặc điểm như 4 chân, 2 mắt, có đuôi, có chiều cao, có cân nặng, màu lông . . .
    * Các hành động như: kêu meo meo, đi, ăn, ngủ, . . .
* Như vậy mọi động vật thuộc loài mèo sẽ có những đặc điểm như trên.
* Đối tượng chính là một con mèo cụ thể nào đó như con mèo con đang nằm dưới chân mình.

Một ví dụ khác. Ví dụ này mình sẽ dùng 1 hình ảnh để minh hoạ:

![](https://f.howkteam.vn/Upload/cke/images/2_IMAGE%20TUTORIAL/1_C%23_AutoC%23/4_C%23%20H%C6%B0%E1%BB%9Bng%20%C4%91%E1%BB%91i%20t%C6%B0%E1%BB%A3ng%20(OOP)/B01_T%E1%BB%95ng%20quan%20v%E1%BB%81%20l%E1%BA%ADp%20tr%C3%ACnh%20OOP/1_T%E1%BB%95ng%20quan%20v%E1%BB%81%20l%E1%BA%ADp%20tr%C3%ACnh%20h%C6%B0%E1%BB%9Bng%20%C4%91%E1%BB%91i%20t%C6%B0%E1%BB%A3ng_Howkteam_com.png)

* Bạn thấy đấy khi nói đến xe otô thì lớp chính khuôn mẫu của cái xe với các đặc trưng như có 4 bánh và có thiết kế <br>tương tự như hình vẽ. Đối tượng chính là các chiếc xe otô cụ thể như Toyota camry, Honda city, Ford ranger.


# 4 tính chất của OOP
1. Tính đóng gói:

     * Các dữ liệu và phương thức có liên quan với nhau được đóng gói thành các lớp để tiện cho việc quản lý và sử dụng.
    * Ngoài ra, đóng gói còn để che giấu một số thông tin và chi tiết cài đặt nội bộ để bên ngoài không thể nhìn thấy.
2. Tính trừu tượng: 
    * Khi viết chương trình theo phong cách hướng đối tượng, việc thiết kế các đối tượng ta cần rút tỉa ra những đặc trưng chung của chúng rồi trừu tượng thành các *interface* và thiết kế xem chúng sẽ tương tác với nhau như thế nào.
3. Tính kế thừa: 
    * Lớp cha có thể chia sẽ dữ liệu và phương thức cho các lớp con, các lớp con khỏi phải định nghĩa lại, giúp chương <br>trình ngắn gọn.
4. Tính đa hình: 
    * Là hiện tượng các đối tượng thuộc các lớp khác nhau có thể hiểu cùng một thông điệp theo các cách khác nhau.

[Tham khảo](https://codelearn.io/sharing/hieu-ro-ve-lap-trinh-huong-doi-tuong)

# Khai báo và sử dụng lớp
Xem Ví dụ minh họa

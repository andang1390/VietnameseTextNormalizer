Thư viện chuẩn hóa text Tiếng Việt cho python, có 1 số tính năng sau :
+ Chuẩn hóa dấu về kiểu phổ thông. Ví dụ : hoà -> hòa
+ Chuẩn hóa các dấu dạng Combining Tone. Ví dụ : 0x301 Combining Acute Accent
+ Xóa các kí tự đặc biệt của HTML lẫn giữa trong âm tiết, Ở ngoài âm tiết thì không thay đổi gì cả. Ví dụ : 0x200B Zero width space 
+ Điền nốt kí tự còn thiếu nếu chắc chắn. 
Ví dụ : 
tôi làm việ ở ban công ngệ FPT, tôi là người viêt nam 
-> tôi làm việc ở ban công nghệ FPT, tôi là người việt nam
+ Không làm lỗi cú pháp có sẵn của text 
+ Tự động sửa 1 số lỗi khác............
+ Code viết bằng C++, Wraper lại cho à python3, chạy rất nhanh. 3MB text Utf-8 chỉ cần 0.01s để xử lý (không tính I/O)
+ Viết hoa một số tên địa danh ở Việt Nam.
Ví dụ :  
vụ giết người xảy ra tại xã tích lương thì phải 
-> vụ giết người xảy ra tại xã Tích Lương thì phải
+ Để file so vào thư mục chứa file Test.py và chạy thử


Tiêu chí sửa của mình là chỉ sửa khi chắc chắn. 
Vì thế nên không thể cover được tất cả các trường hợp nhưng mình sẽ update dần dần.


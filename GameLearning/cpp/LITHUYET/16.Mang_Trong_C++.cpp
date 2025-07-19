/*
I. Mảng:
- Mảng được dùng để lưu nhiều giá trị biến trong 1 biến duy nhất. Thay vì khai báo nhiều biến riêng biệt cho giá tị
- Để khai báo 1 biến, xđ kiểu biến, chỉ định tên mảng đi kèm với ngoặc vuông phía sau, chỉ định số lượng phần tử mà mảng sẽ lưu trữ
! có thể sài: int myNum[3] ={0,1,2}
- Muốn truy cập phần tử trong mảng  tham chiếu gtri đó vào trong []
II. Mảng và Vòng lặp:
- lặp qua 1 mảng xem vd 1 và vd 2 nha ae.
III. Bỏ qua kích thước của mảng:
- trong c++ m không cần nhất thiết phải đặt giá trị của mảng vì trình biên dình đủ thông minh để biết.
IV. Lấy kích thước mảng 
- để lấy kích thước của 1 mảng bạn có thể sự dụng sizeof()
! nó trả về kích thước theo dạng byte, để tìm được kích thước mảng m phải chia cho sizeof() phần tử đầu tiên 
V. Mảng đa chiều:
- mảng đa chiều là mảng của mảng
- để khai báo 1 mảng đa chiều, xđ kiểu biến, chỉ định tên của mảng, theo sau là số ngoặc vuông thể hiện 

*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    // vd1:
    // string myName[2] = {"Hoang", "Long"};
    // for(int i=0; i<2; i++){
    //     cout<< myName[i] <<" ";
    // }
    // // vd2.
   // }
  // vd3:
  string myCars[] = {"hoàng", "long"};
  cout<<myCars[1];
}

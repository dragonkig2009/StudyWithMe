/*
I. Các kiểu dữ liệu cơ bản
* bool,char - 1 bytes
* int - 2 -> 4 bytes
* float - 4 bytes
* double - 8 bytes  
II. kiểu số
* dùng int cho các số nguyên ko có dấu ","
* dùng float và double cho các số thực có dấu ","
! float chỉ lưu được 6 -> 7 số sau dấu ",". Còn đối với double là 15 số. anh chỉ nói thế là em hiểu
! số khoa học: Số dấu phẩy động cũng có thể là số khoa học với chữ "e" để chỉ lũy thừa của 10
III. Kiểu dữ liệu boolean
* kiểu dữ liệu boolean đc sự dụng cho các giá trị true or false
IV. Kiểu dữ liệu char
* char dc sự dụng để lưu các ký tự đơn kí tự phải được bao quanh bơi  ''
* còn có các giá trị trong bảng ASCII nữa nha bro
V. Kiểu dữ liệu string.
* string để lưu một đoạn văn bản. Đc bao quanh bơi dấu ngoăc kép.
* Kiểu tiêu đề được sự dụng khi sử dụng string là #include <string>
VI. C++ auto.
* từ "auto" được sự dụng để tự gán type theo valua bạn gắn 
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
  // char _mychar = 'A';
  // cout<<_mychar<<endl;
  // string _mystring = "hello";
  // cout<<"hello"<<endl;
  auto x = 5.5f;
  cout<<typeid(x).name()<<endl;
}
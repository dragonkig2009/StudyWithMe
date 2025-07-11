/*
 *
I. string intro
* string used for storing text or characters
* a string varriable used containe collection of characters surround by double quotes
* to use string you must include addtional header file source code, <string> library
II. string concentaine 
* the + operator used between string to add them together to make new string. This is called concatenation
III. string and numbers in C++
* operato + using to addtion and concatenation. Numbers - addtion | string - concatnation
* if you add tow numbers, the refust will be a new numbers
* if you add tow string, the refust will be a concatnation string
IV. string length 
* to get the length of a string, you use length() function;
* might using size() or length()
* u can access the characters in a string by refering  to ít index numbers inside square backéts
* to change value to specific characters in an string, refer to the index numbers, use single qoutes
! can access the characters in a string by use at() 
V. String Specific:
- cách để thêm dấu "" vào một từ đang in là dung "  /"  "
- Tương Tự v: '' -> /'' || / -> //
VI. Chuỗi nhập: 
- cin có thế sự dụng khi người dung nhập vào 1 string 
- tuy nhiên: không được nhập string có khoảng trắng
- có thể dùng getline()
VII. C-style string
- thay vì sự dụng string chúng ta có thể sự dụng: char nameValue[] = Value.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
 // string myName = "hoang long";
 // cout<< myName[0] << endl;
  // cout<<"hello ae"<<endl;
  // cout<<"hello ae /minh/ là "<<endl;
  // string myName;
  // cout<<"nhap ten m vo";
  // getline(cin, myName);
  // cout<<"day la ten cua toi: "<<myName;
  char myValue[] = "HoangLong";
  cout<<myValue<<endl;
  return 0;
}

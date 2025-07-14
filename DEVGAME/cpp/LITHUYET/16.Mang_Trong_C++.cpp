/*
- Mảng được dùng để lưu nhiều giá trị biến trong 1 biến duy nhất. Thay vì khai báo nhiều biến riêng biệt cho giá tị
- Để khai báo 1 biến, xđ kiểu biến, chỉ định tên mảng đi kèm với ngoặc vuông phía sau, chỉ định số lượng phần tử mà mảng sẽ lưu trữ
! có thể sài: int myNum[3] ={0,1,2}
- Muốn truy cập phần tử trong mảng  tham chiếu gtri đó vào trong []
- lặp qua 1 mảng xem vd 1 và vd 2 nha ae.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    // vd1:
    string myName[2] = {"Hoang", "Long"};
    for(int i=0; i<2; i++){
        cout<< myName[i] <<" ";
    }
    // vd2.
    for(string x : myName){
        cout<< x << " ";
    }
}
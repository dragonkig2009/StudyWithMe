/*
I. Vòng lặp FOR:
    - khi bạn biết số lần chính xác phải lặp qua khối mã hãy dùng FOR   
    ! CÚ PHÁP: for (statement 1; statement 2; statement 3){ }: - statement 1: Khởi tạo biến lặp 
                                                               - statement 2: Điều kiện tiếp tục lặp
                                                               - statement 3: Tăng biến sau mỗi vòng lặp
II. Vòng lặp lồng nhau:
---------------------------------------------------------------------------------------------------------
III. Vòng lặp FOREACH:
    - được dùng để lặp qua các phần tử trong một mảng
    ! CÚ PHÁP: for(type variablename : arrayname ){}
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    string arr = "Hello";
    for (char x : arr){
        cout << x << " ";
    }
}
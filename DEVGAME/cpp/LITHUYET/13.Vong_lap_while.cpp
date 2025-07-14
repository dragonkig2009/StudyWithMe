/* 
I. Vòng lặp WHILE:
    - vong lặp WHILE lặp 1 khối mã nếu điều kiện của nó là TRUE
    ! Phải tăng biến i++, nếu không vòng lập sẽ kết thúc
II. Vòng lặp Do While:
    - vong lặp này sẽ thực thi khối mã này trước một lần. Sau đó, nó sẽ lặp lại vong lặp miễn là đk vẫn đúng 
    ! nếu điều kiện sai thì it nhất khối mã đó vẫn chạy 1 lần
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    // int i = 0;
    // while(i<5){
    //     cout<<i<<endl;
    //     i++;
    // }
    // int dem_nguoc = 10;
    // while(dem_nguoc>0){
    //     cout<<dem_nguoc--<<" ";
    // }
    int i = 5;
    do{
        cout<<i<<" ";
        i++;
    }
    while(i<5);
}
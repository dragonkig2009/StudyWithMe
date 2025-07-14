#include <bits/stdc++.h>
using namespace std;


int main(){
    int target = 9;
    vector <int>nums;
    ifstream file("./B1.inp");
    int x;
    while(file >> x){
        nums.push_back(x);
    }
    for(int i=0; i < nums.size(); i++){
        for(int j = nums.size()-1; j >= 1; j--){
            if(nums[j] + nums[i] == target){
                cout <<"["<<i<<","<<j<<"]"<< endl;
            }
        }
    }
}
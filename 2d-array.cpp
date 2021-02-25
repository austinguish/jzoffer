//
// Created by 蒋逸伟 on 2021/2/25.
//
#include "bits/stdc++.h"
using namespace std;
class Solution {
public: 
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()||matrix[0].empty()) return false;
        int cur_num;
        int column_length = matrix[0].size();
        int row_length = matrix.size();
        int row = 0;
        int column = column_length - 1;
        while(row<row_length&&column>=0){
            cur_num = matrix[row][column];
            if(cur_num == target) return true;
            else if(cur_num<target) row++;
            else if(cur_num>target) column--;
        }
        return false;
    }
};
int main(){
    vector<vector<int>> matrix;
    matrix = {{5}};
    Solution s;
    cout<<s.findNumberIn2DArray(matrix,-5);
    return 0;
}
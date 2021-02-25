//
// Created by 蒋逸伟 on 2021/2/23.
//
#include<iostream>
int bitXor(int x, int y) {
    return ~(x|~y)|~(~x|y);
}
int main(){
    int x = 10;
    int y = 6;
    std::cout<<bitXor(-2147483648,-277493648);
    return 0;
}

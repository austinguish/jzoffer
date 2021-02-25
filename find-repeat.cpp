//
// Created by 蒋逸伟 on 2021/2/25.
//
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        unordered_map<int,int> map;
        unordered_map<int,int>::iterator iter;
        auto i = nums.begin();
        for(;i!=nums.end();i++){
            iter = map.find(*i);
            if(iter==map.end()) map.insert(pair<int,int>(*i,1));
            else break;
        }
        return *i;
    }
};
int main(){
    vector<int> a = {2,3,1,0,2,5,3};
    Solution s;
    cout<<s.findRepeatNumber(a);
    return 0;
}

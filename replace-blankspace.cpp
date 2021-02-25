//
// Created by 蒋逸伟 on 2021/2/25.
//
#include "bits/stdc++.h"
using namespace std;
class Solution {
public:
    string replaceSpace(string s) {
        string tmp;
        for(auto &i:s){
            if (i!=' ') tmp+=i;
            else if(i==' ')tmp.append("%20");
        }
        return tmp;
    }
};
int main(){
    string s = "We are family!";
    Solution solve;
    cout<<solve.replaceSpace(s);
    return 0;
}

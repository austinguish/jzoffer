//
// Created by 蒋逸伟 on 2021/2/15.
//
//
// Created by 蒋逸伟 on 2021/2/13.
//
#include <string>
#include<unordered_set>
#include <iostream>
#include <algorithm>
#define max(a,b)((a)>(b)?(a):(b))
using namespace std;
//
// Created by 蒋逸伟 on 2021/2/13.
//
#include <string>
#include<unordered_set>
#include <iostream>
#include <algorithm>
#define max(a,b)((a)>(b)?(a):(b))
using namespace std;
//
// Created by 蒋逸伟 on 2021/2/13.
//
#include <string>
#include<unordered_set>
#include <iostream>
#include <algorithm>
#define min(a,b)((a)>(b)?(b):(a))
using namespace std;
//
// Created by 蒋逸伟 on 2021/2/13.
//
#include <string>
#include<unordered_map>
#include <iostream>
#include <algorithm>
#define max(a,b)((a)>(b)?(a):(b))
using namespace std;
class Solution {
public:
    unordered_map<char,int> window_map;
    unordered_map<char,int> ori_map;
    void init(string t){
        unordered_map<char,int>::iterator iter;
        for(auto i:t){
            iter = ori_map.find(i);
            if(iter!= ori_map.end()){
                iter->second++;
            }
            else(ori_map.insert(pair<char,int>(i,1)));
        }
    }
    bool check(){
        unordered_map<char,int>::iterator iter;
        for(auto i:ori_map){
            iter = window_map.find(i.first);
            if(iter==window_map.end()||iter->second<i.second) return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        init(t);
        string::iterator result[2];
        result[0] = s.begin();
        result[1] = s.end();
        string::iterator left = s.begin();
        string::iterator right = s.begin();
        unordered_map<char,int>::iterator iter;
        while(right!=s.end()){
            cout<<*iter;
            //update
            if(distance(left,right)<distance(result[0],result[1])){
                result[0] = left;
                result[1] = right;
            }
        }
        string res = string(result[0],result[1]);
        return res;
    }
    
};
int main(){
    Solution S;
    cout<<S.minWindow("ADOBECODEBANC","ABC");
    return 0;
}



//
// Created by 蒋逸伟 on 2021/2/13.
//
#include <string>
#include<iomanip>
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
class Solution{
public:
    int lengthOfLongestSubstring(string s){
        if(s.empty()) return 0;
        unordered_set<char> hashmap;
        int ans=1,maxLength;
        string::iterator left = s.begin();
        string::iterator right = s.begin();
        for (;left!=s.end();left++){
            while(right!=s.end()&&!hashmap.count(*right)){
                hashmap.insert(*right);
                right++;
            }
            maxLength = std::distance(left,right);
            ans = max(maxLength,ans);
            hashmap.erase(*left);
        }
        return ans;
    }
};
int main(){
    Solution S;
    cout<<S.lengthOfLongestSubstring("pwwkew");
}

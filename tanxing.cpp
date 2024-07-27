#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res =0, count = 0;
        for (int i = 0; i < prices.size() - 1; i++) {
            count = prices[i + 1] - prices[i];
            if (count > 0)res+=count;
        }
        return res;
    }
};
//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) {
//        int res = -10000, count = 0;
//        for (auto i : nums) {
//            count += i;
//            if (count > res)res = count;
//            if (count < 0)count = 0;
//        }
//        return res;
//    }
//};
//class Solution {
//public:
//    int wiggleMaxLength(vector<int>& nums) {
//        int preDif, curDif;
//        int res = 1;
//        for (int i = 0; i < nums.size(); i++) {
//            if (i > 0)
//                curDif = nums[i] - nums[i - 1];
//            if ((preDif >= 0 && curDif < 0) || (preDif <= 0 && curDif > 0)) {
//                res++;
//            }
//            preDif = curDif;
//        }
//    }
//};
//class Solution {
//public:
//    int findContentChildren(vector<int>& g, vector<int>& s) {
//        sort(g.begin(), g.end());
//        sort(s.begin(), s.end());
//        int j = 0;
//        if (s.size() <= 0)return 0;
//        for (int i = 0; i < s.size(); i++) {
//            if (j<g.size()&&s[i] >= g[j]) {
//                j++;
//            }
//        }
//        return j;
//    }
//};